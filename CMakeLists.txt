# CMakeLists.txt
# 
# CMakeのバージョンを指定
cmake_minimum_required(VERSION 3.10)

## for C++11
add_definitions(-std=c++11)

# set the project name
project(Report06 CXX)

# add the executable
add_executable(report06 report06.cpp shapes.cpp sorts.cpp)