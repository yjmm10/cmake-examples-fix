cmake_minimum_required(VERSION 3.21)
project(cal)

# 包含头文件


add_library(cal SHARED cal.cpp)
target_compile_definitions(cal PRIVATE CAL_EXPORT)
target_include_directories(cal PUBLIC .)
target_compile_definitions(cal PRIVATE CAL_EXPORT)