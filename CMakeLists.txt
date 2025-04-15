cmake_minimum_required(VERSION 3.10)
project(CMakeLearning VERSION 1.0)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 设置输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# 包含头文件目录
include_directories(${PROJECT_SOURCE_DIR}/include)

# 添加可执行文件
add_executable(hello hello.cpp)

# 添加一个带有库的子项目示例
add_subdirectory(src)