cmake_minimum_required(VERSION 3.21)
project(test)

set(CMAKE_CXX_STANDARD 11)
set(PCL_INSTALL_PATH /Volumes/mac-data/Developer_Slow/cpp/pcl/newnew/pcl-superbuild/build/CMakeExternals/Install)
include_directories(${PCL_INSTALL_PATH}/pcl-ios-device/include/pcl-1.8/)
include_directories(${PCL_INSTALL_PATH}/eigen/)
include_directories(${PCL_INSTALL_PATH}/boost-ios-device/include)
link_directories(${PCL_INSTALL_PATH}/pcl-ios-device/lib)
link_directories(${PCL_INSTALL_PATH}/boost-ios-device/lib)
# link boost
#link_libraries(boost_date_time boost_filesystem boost_system boost_thread boost_iostreams boost_program_options boost_signals boost_regex)
# link pcl

add_library(test library.cpp)
target_link_libraries(test PRIVATE boost_date_time boost_filesystem boost_system boost_thread boost_iostreams boost_program_options boost_signals boost_regex)


set_target_properties(test PROPERTIES PUBLIC_HEADER "library.h")

install(TARGETS test
        PUBLIC_HEADER DESTINATION include
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)