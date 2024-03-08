cmake_minimum_required(VERSION 3.1.0)

project(json_fmt)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SRC_LIST json_fmt.cpp)

# target
add_library(${PROJECT_NAME} ${SRC_LIST})

# -I
target_include_directories(${PROJECT_NAME} PUBLIC . ${PROJECT_SOURCE_DIR}/third)

# -L
target_link_directories(${PROJECT_NAME} PUBLIC )

# -l
target_link_libraries(${PROJECT_NAME} PUBLIC pthread)

# example
add_subdirectory(example)