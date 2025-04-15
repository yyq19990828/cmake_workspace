find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(1-opencv main.cpp)
target_link_libraries(1-opencv ${OpenCV_LIBS})