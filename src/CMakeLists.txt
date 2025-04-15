# src下的CMakeLists.txt
# 这里演示如何创建和使用库

# 创建一个简单的静态库
add_library(mathlib STATIC math_utils.cpp)

# 创建一个依赖于库的可执行文件
add_executable(calculator calculator.cpp)
target_link_libraries(calculator mathlib)

add_subdirectory(1-opencv)