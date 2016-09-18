#!/bin/bash

cd linux
#make distclean
export ARCH=arm
export CROSS_COMPILE=arm-linux-gnueabi-
cp config_mini2440_x35 .config
make zImage -j4
make LOADADDR=0x30008000 STARTADDR=0x30008040 uImage
../tools/collect-src -f linux -o ../linux_src.list
cd ..