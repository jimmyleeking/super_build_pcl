#!/bin/bash
cd build
cp  -rf ../test/ CMakeExternals/Source/test/
cmake ..  -DPCL_TARGET_BUILD_VERSION="1.8.1" -DBUILD_TEST_CODE=ON
make -j16
echo "********** BUILD DONE **********"