#[[这是一块注释
123  ]]
cmake_minimum_required(VERSION 3.0.0)

project(test VERSION 1.0.0)

#SET(SRC src/main.cpp src/Test.cpp)
#add_executable(test ${SRC})

set(CMAKE_CXX_STANDARD 11)
# set(HOME /root/Nx)
# set(EXECUTABLE_OUTPUT_PATH ${HOME}/build/debug)
#set(EXECUTABLE_OUTPUT_PATH .) # 对应的是makefile的目录

# 搜索文件 方法1
#include_directories(${PROJECT_SOURCE_DIR}/inc)
#aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SRC_LIST)
#add_executable(test ${SRC_LIST})
# 搜索文件 方法2
#file(GLOB MAIN_SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
#file(GLOB MAIN_INC ${CMAKE_CURRENT_SOURCE_DIR}/inc/*.h)
# 包含头文件
#include_directories(inc)

# 一些宏定义
#PROJECT_SOURCE_DIR # cmake 时后面跟着的目录
#CMAKE_CURRENT_SOURCE_DIR # 当前cmakelist 所在目录

include_directories(inc)

file(GLOB_RECURSE MAIN_SRC "src/*.cpp")

add_executable(test ${MAIN_SRC})