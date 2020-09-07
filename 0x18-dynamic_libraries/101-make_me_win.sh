#!/bin/bash
wget -P /tmp/ https://github.com/hfog2066/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/ramdom.so
