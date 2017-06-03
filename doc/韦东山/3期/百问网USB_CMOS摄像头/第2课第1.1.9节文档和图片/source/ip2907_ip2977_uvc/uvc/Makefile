KERN_DIR = /usr/src/linux-headers-2.6.31-14-generic

all:
	make -C $(KERN_DIR) M=`pwd` modules 

clean:
	make -C $(KERN_DIR) M=`pwd` modules clean
	rm -rf modules.order

uvcvideo-objs  := uvc_driver.o uvc_queue.o uvc_v4l2.o uvc_video.o uvc_ctrl.o \
                  uvc_status.o uvc_isight.o
obj-m += uvcvideo.o
