#!/bin/bash
wget -P /tmp/ https://github.com/Pericles001/alx-low_level_programming/blob/master/0x18-dynamic_libraries/nrandom.so?raw=true
export LD_PRELOAD =/tmp/nrandom.so