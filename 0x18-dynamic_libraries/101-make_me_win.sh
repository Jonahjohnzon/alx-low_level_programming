#!/bin/bash
wget -P /tmp https://github.com/Jonahjohnzon/alx-low_level_programming/tree/master/0x18-dynamic_libraries/random.so
export LD_PRELOAD=/tmp/random.so
