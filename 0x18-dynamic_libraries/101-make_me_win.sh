#!/bin/bash
wget -P ..https://github.com/Rubylena/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
