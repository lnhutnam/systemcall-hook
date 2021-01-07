ccflags-y = -std=gnu99
obj-m += hook.o
hook-objs := hook_open_syscall.o  
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
