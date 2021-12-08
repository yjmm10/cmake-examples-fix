cmake_minimum_required(VERSION 3.21)
project(main)

# 包含头文件


add_executable(main main.cpp)
target_include_directories(main PUBLIC ${CMAKE_SOURCE_DIR}/3rdparty/add)
target_link_libraries(main PRIVATE ${CMAKE_SOURCE_DIR}/3rdparty/add/lib/add.lib)