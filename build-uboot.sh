#!/bin/bash

cd u-boot
make mini2440_config
make
#arm-linux-objdump -D -m arm u-boot > u-boot.dis
../tools/collect-src -f u-boot -o ../u-boot.list
cd ..