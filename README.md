CMake build scripts for cross compiling PCL and its dependencies for Android and iOS.

# Introduction

This Repo is Base on [pcl-superbuild](https://github.com/willperkins/pcl-superbuild),I just turn off some pcl 
# Building for iOS


```
mkdir build && cd build
# cmake .. -DPCL_TARGET_BUILD_VERSION="{1.8.1 or 1.11.1}"
cmake ..  -DPCL_TARGET_BUILD_VERSION="1.8.1"
make -j16
```

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
