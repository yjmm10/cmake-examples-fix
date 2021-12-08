cmake_minimum_required(VERSION 3.21)
project(add)

add_library(add SHARED add.cpp)
target_compile_definitions(add PRIVATE ADD_EXPORT)
target_include_directories(add PUBLIC .)
target_compile_definitions(add PRIVATE ADD_EXPORT)

