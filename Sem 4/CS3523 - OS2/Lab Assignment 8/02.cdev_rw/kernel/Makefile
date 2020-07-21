
# If KERNELRELEASE is defined, we've been invoked from the
# kernel build system adn can use its lancuage
ifneq ($(KERNELRELEASE),)
	obj-m  := mykmod.o
        mykmod-objs := mykmod_main.o


else

	KERNELRELEASE  ?= /lib/modules/$(shell uname -r)/build
	PWD    := $(shell pwd)

default:
	$(MAKE) -C $(KERNELRELEASE) M=$(PWD) modules

endif

clean:
	@rm -rf *.o *.ko Module.* .*.cmd modules.order *.mod.c .tmp_versions
