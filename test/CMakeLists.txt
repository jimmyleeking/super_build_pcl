cmake_minimum_required(VERSION 3.21)
project(test)

set(CMAKE_CXX_STANDARD 11)
#set(PCL_INSTALL_PATH "../")
message(STATUS "PCL_INSTALL_PATH: ${PCL_INSTALL_PATH}")
include_directories(${PCL_INSTALL_PATH}/pcl-ios-device/include/pcl-1.8/)
include_directories(${PCL_INSTALL_PATH}/eigen/)
include_directories(${PCL_INSTALL_PATH}/boost-ios-device/include)
add_library(test library.cpp)

set_target_properties(test PROPERTIES PUBLIC_HEADER "library.h")

install(TARGETS test
        PUBLIC_HEADER DESTINATION include
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)