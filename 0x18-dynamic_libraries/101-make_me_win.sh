#!/bin/bash
wget -P /tmp https://github.com/ZafCode14/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libwin.so 
export LD_PRELOAD=/tmp/libwin.so
