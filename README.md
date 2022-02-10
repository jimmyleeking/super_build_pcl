CMake build scripts for cross compiling PCL and its dependencies for Android and iOS.

# Introduction

PCL is suck for building iOS support ,that trouble and waste our time to solve dependency compact.

This Repo is Base on [pcl-superbuild](https://github.com/willperkins/pcl-superbuild),I just turn off pcl_segmentation pcl_registration.
I recommend you should edit pcl building option in 'external-project-macros.cmake' for your reality requirement.

# Building for iOS

Just do it:

```shell
# default build 1.8.1
./build.sh
# if you want to build test program after building pcl success:
./build_test.sh
```


## Building Options

|Parameter|Detail|
|--|--|
|BUILD_IOS_DEVICE|default:ON,building iOS target|
|BUILD_ANDROID|default:OFF,ON:building Android target|
|PCL_TARGET_BUILD_VERSION|1.8.1 or 1.11.1 |
|SOURCE_CODE_BY_FILE|ON:download by you local files (pls edit url target),OFF:default,download source code from remote git repo|
|BUILD_TEST_CODE|ON:building test source code|

##  Building Examples

Build 1.8.1 

```
mkdir build && cd build
cmake ..  -DPCL_TARGET_BUILD_VERSION="1.8.1"
make -j16
```

Building test code

```
mkdir build && cd build
cmake ..  -DPCL_TARGET_BUILD_VERSION="1.8.1" -DBUILD_TEST_CODE=ON
make -j16
```


# Building for Android

## Requirements

- Android NDK, Revision 8d
- Android SDK (unsure about specific version)

# Building for Android

```
$ mkdir build && cd build
$ cmake -DBUILD_IOS_DEVICE:BOOL="OFF" ../
$ export ANDROID_NDK=${PATH_TO_ANDROID_NDK_R8}
$ make
```
