#!/bin/bash
wget -P /tmp https://github.com/BABABUSOLA/alx-low_level_programming/blob/master/0x18-dynamic_libraries/putshack.so
export LD_PRELOAD=/tmp/putshack.so
