obj-m := basicfs.o
basicfs-objs = debug.o main.o
ccflags-y	+= -DDEBUG
all	:
	make -C /lib/modules/`uname -r`/build M=$(PWD) modules
	
clean:	
	rm -f *.o *.ko .*.cmd *.mod.c Module.symvers modules.order
	rm -rf .tmp_versions/
