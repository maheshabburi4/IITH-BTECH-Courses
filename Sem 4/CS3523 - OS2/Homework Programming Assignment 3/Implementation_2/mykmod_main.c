#include <linux/uaccess.h>
#include <linux/fs.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/mm.h>

#include <mydev.h>

MODULE_DESCRIPTION("My kernel module - mykmod");
MODULE_AUTHOR("maruthisi.inukonda [at] gmail.com");
MODULE_LICENSE("GPL");

// Dynamically allocate major no
#define MYKMOD_MAX_DEVS 256
#define MYKMOD_DEV_MAJOR 0

static int mykmod_init_module(void);
static void mykmod_cleanup_module(void);

static int mykmod_open(struct inode *inode, struct file *filp);
static int mykmod_close(struct inode *inode, struct file *filp);
static int mykmod_mmap(struct file *filp, struct vm_area_struct *vma);

module_init(mykmod_init_module);
module_exit(mykmod_cleanup_module);

static struct file_operations mykmod_fops = {
	.owner = THIS_MODULE,	/* owner (struct module *) */
	.open = mykmod_open,	/* open */
	.release = mykmod_close,	/* release */
	.mmap = mykmod_mmap,	/* mmap */
};

static void mykmod_vm_open(struct vm_area_struct *vma);
static void mykmod_vm_close(struct vm_area_struct *vma);
//static int mykmod_vm_fault(struct vm_fault *vmf);
static int mykmod_vm_fault(struct vm_area_struct *vma, struct vm_fault *vmf);

// TODO Data-structure to keep per device info 
struct mykmod_dev_info {
	char *data;
	size_t size;
};

// TODO Device table data-structure to keep all devices
struct mykmod_dev_info *dev_table[MYKMOD_MAX_DEVS];

// TODO Data-structure to keep per VMA info 
struct vma_info {
	struct mykmod_dev_info *dev_info;
	unsigned long npagefaults;
};
struct vma_info *vm_info;

static const struct vm_operations_struct mykmod_vm_ops = {
	.open = mykmod_vm_open,
	.close = mykmod_vm_close,
	.fault = mykmod_vm_fault
};

int mykmod_major;

static int mykmod_init_module(void)
{
	int i;
	printk("mykmod loaded\n");
	printk("mykmod initialized at=%p\n", init_module);

	if ((mykmod_major =
	     register_chrdev(MYKMOD_DEV_MAJOR, "mykmod", &mykmod_fops)) < 0) {
		printk(KERN_WARNING "Failed to register character device\n");
		return 1;
	} else {
		printk("register character device %d\n", mykmod_major);
	}
	// TODO initialize device table
	for (i = 0; i < MYKMOD_MAX_DEVS; i++) {
		dev_table[i] = (struct mykmod_dev_info *)
		    kmalloc(sizeof(struct mykmod_dev_info), GFP_KERNEL);
	}
	return 0;
}

static void mykmod_cleanup_module(void)
{
	int i;
	printk("mykmod unloaded\n");
	unregister_chrdev(mykmod_major, "mykmod");
	// TODO free device info structures from device table
	for (i = 0; i < MYKMOD_MAX_DEVS; i++) {
		if (!dev_table[i])
			kfree(dev_table[i]);
	}
	return;
}

static int mykmod_open(struct inode *inodep, struct file *filep)
{
	printk("mykmod_open: filep=%p f->private_data=%p "
	       "inodep=%p i_private=%p i_rdev=%x maj:%d min:%d\n",
	       filep, filep->private_data,
	       inodep, inodep->i_private, inodep->i_rdev, MAJOR(inodep->i_rdev),
	       MINOR(inodep->i_rdev));

	// TODO: Allocate memory for devinfo and store in device table and i_private.
	if (inodep->i_private == NULL) {
		struct mykmod_dev_info *info;
		info = (struct mykmod_dev_info *)
		    kmalloc(sizeof(struct mykmod_dev_info), GFP_KERNEL);
		info->data = (char *)kzalloc(MYDEV_LEN, GFP_KERNEL);
		info->size = MYDEV_LEN;
		inodep->i_private = info;
		dev_table[MINOR(inodep->i_rdev)] = info;
	}
	// Store device info in file's private_data aswell
	filep->private_data = inodep->i_private;

	return 0;
}

static int mykmod_close(struct inode *inodep, struct file *filep)
{
	// TODO: Release memory allocated for data-structures.
	kfree(vm_info);
	printk("mykmod_close: inodep=%p filep=%p\n", inodep, filep);
	return 0;
}

static int mykmod_mmap(struct file *filp, struct vm_area_struct *vma)
{
	printk("mykmod_mmap: filp=%p vma=%p flags=%lx\n", filp, vma,
	       vma->vm_flags);

	//TODO setup vma's flags, save private data (devinfo, npagefaults) in vm_private_data
	vma->vm_ops = &mykmod_vm_ops;
	vma->vm_flags |= VM_DONTEXPAND | VM_DONTDUMP;

	vm_info = kmalloc(sizeof(struct vma_info), GFP_KERNEL);
	vm_info->dev_info = (struct mykmod_dev_info*)(filp->private_data);
	vm_info->npagefaults = 0;
	vma->vm_private_data = vm_info;
	mykmod_vm_open(vma);

	// return -ENOSYS; // Remove this once mmap is implemented.
	return 0;
}

static void mykmod_vm_open(struct vm_area_struct *vma)
{
	struct vma_info *info = (struct vma_info *)(vma->vm_private_data);
	info->npagefaults = 0;
	printk("mykmod_vm_open: vma=%p npagefaults:%lu\n", vma,
	       info->npagefaults);
}

static void mykmod_vm_close(struct vm_area_struct *vma)
{
	struct vma_info *info = (struct vma_info *)(vma->vm_private_data);
	printk("mykmod_vm_close: vma=%p npagefaults:%lu\n", vma,
	       info->npagefaults);
	info->npagefaults = 0;
}

static int mykmod_vm_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
{
	// TODO: build virt->phys mappings
	struct page *page;
	struct vma_info *info = (struct vma_info *)(vma->vm_private_data);
	struct mykmod_dev_info *device_info = info->dev_info;
	unsigned long offset = (unsigned long)(vmf->pgoff);

	// if there is nodata
	if (!device_info) {
		printk("NODATA");
		return VM_FAULT_SIGBUS;
	}
	// if the pageoffset is greater than virtual address
	if (offset > vma->vm_end) {
		printk("INVALID ADDRES");
		return VM_FAULT_SIGBUS;
	}
	// if all the conditions are satisfied
	info->npagefaults++;
	page = virt_to_page(device_info->data);
	get_page(page);
	vmf->page = page;
	printk("mykmod_vm_fault: vma=%p vmf=%p pgoff=%lu page=%p\n", vma, vmf,
	       vmf->pgoff, vmf->page);
	return 0;
}