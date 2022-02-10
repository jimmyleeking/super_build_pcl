#!/bin/bash

mkdir build
cd build
cmake ..  -DPCL_TARGET_BUILD_VERSION="1.8.1" 
make -j16
