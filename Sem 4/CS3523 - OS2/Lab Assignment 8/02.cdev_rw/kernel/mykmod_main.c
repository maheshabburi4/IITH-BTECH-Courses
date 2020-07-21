#include <linux/uaccess.h>
#include <linux/fs.h>
#include <linux/module.h>

MODULE_DESCRIPTION("My kernel module - mykmod");
MODULE_AUTHOR("maruthisi.inukonda [at] gmail.com");
MODULE_LICENSE("GPL");

// Dynamically allocate major no
#define MYKMOD_DEV_MAJOR 0

static int mykmod_init_module(void);
static void mykmod_cleanup_module(void);

static int mykmod_open(struct inode *inode, struct file *filp);
static int mykmod_close(struct inode *inode, struct file *filp);
static ssize_t mykmod_read(struct file *, char *, size_t, loff_t *);
static ssize_t mykmod_write(struct file *, const char *, size_t, loff_t *);

module_init(mykmod_init_module);
module_exit(mykmod_cleanup_module);

static struct file_operations mykmod_fops = {
	.owner  = THIS_MODULE,	/* owner (struct module *) */
	.open   = mykmod_open,	/* open */
	.release  = mykmod_close,     /* release */
	.read   = mykmod_read,	/* read */
	.write  = mykmod_write,	/* write */
};

int mykmod_major;

static int mykmod_init_module(void)
{
	printk("mykmod loaded\n");
	printk("mykmod initialized at=%p\n", init_module);

	if ((mykmod_major = register_chrdev(MYKMOD_DEV_MAJOR,"mykmod",&mykmod_fops))<0) {
		printk(KERN_WARNING "Failed to register character device\n");
		return 1;
	}
	else {
		printk("register character device %d\n", mykmod_major);
	}

	return 0;
}

static void mykmod_cleanup_module(void)
{
	printk("mykmod unloaded\n");
	unregister_chrdev(mykmod_major,"mykmod");

	return;
}

static int
mykmod_open(struct inode *inodep, struct file *filep)
{
  printk("mykmod_open: inodep=%p filep=%p\n", inodep, filep);
  return 0;
}

static int
mykmod_close(struct inode *inodep, struct file *filep)
{
  printk("mykmod_close: inodep=%p filep=%p\n", inodep, filep);
  return 0;
}

static char kernbuf[4096];

static ssize_t
mykmod_read(struct file *filep, char *userbufp, size_t size, loff_t *loffp)
{
  size_t ret;
  printk("mykmod_read: filep=%p userbuf=%p size=%lu loff=%lld f_pos=%lld f_count=%ld\n", filep, userbufp, size, *loffp, filep->f_pos, filep->f_count.counter);
  //if (memcpy((void*)userbufp, (void*)kernbuf, size) == NULL) {
  if ((ret = copy_to_user(userbufp, kernbuf, size)) != 0) {
    printk("mykmod_read: ret:%ld\n", ret);
    return -size;
  }

  (*loffp) += size;
  return size;
}

static ssize_t
mykmod_write(struct file *filep, const char *userbufp, size_t size, loff_t *loffp)
{
  size_t ret;
  printk("mykmod_write: filep=%p userbuf=%p size=%lu loff=%lld f_pos=%lld f_count=%ld\n", filep, userbufp, size, *loffp, filep->f_pos, filep->f_count.counter);
  //if (memcpy((void*)kernbuf, (void*)userbufp, size) == NULL) {
  if ((ret = copy_from_user(kernbuf, userbufp, size)) != 0) {
    printk("mykmod_write: ret:%ld\n", ret);
    return -size;
  }

  (*loffp) += size;
  return size;
}

