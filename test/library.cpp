#include "library.h"

#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
void hello()
{
    std::cout << "Hello, World!" << std::endl;
    pcl::PointCloud<pcl::PointXYZ> cloud;
    cloud.width = 5;
    cloud.height = 1;
    cloud.is_dense = false;
    cloud.resize(cloud.width * cloud.height);

    for (auto &point : cloud)
    {
        point.x = 1024 * rand() / (RAND_MAX + 1.0f);
        point.y = 1024 * rand() / (RAND_MAX + 1.0f);
        point.z = 1024 * rand() / (RAND_MAX + 1.0f);
    }
    pcl::io::savePCDFileASCII("test_pcd.pcd", cloud);
}
