cmake_minimum_required(VERSION 3.1.0)

project(json_fmt_example CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(json_fmt_example example.cpp)

# -l
target_link_libraries(json_fmt_example PRIVATE json_fmt)