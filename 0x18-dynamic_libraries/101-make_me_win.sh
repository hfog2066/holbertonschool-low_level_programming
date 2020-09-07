#!/bin/bash
wget -P /tmp/ https://raw.github.com/hfog2066/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/ramdom.so
