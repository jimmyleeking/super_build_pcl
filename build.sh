#!/bin/bash

mkdir build
cd build
source ~/.bash_profile
cmake ..  -DPCL_TARGET_BUILD_VERSION="1.8.1" -DSOURCE_CODE_BY_FILE=ON
make -j16
