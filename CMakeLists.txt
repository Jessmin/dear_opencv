cmake_minimum_required(VERSION 3.0)

project(dear_opencv)

# find required opencv
find_package(OpenCV REQUIRED)

# directory of opencv headers
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(img_transform img_transform.cpp)

# directory of opencv library
link_directories(${OpenCV_LIBRARY_DIRS})
# opencv libraries
target_link_libraries(img_transform ${OpenCV_LIBS})