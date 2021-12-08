cmake_minimum_required(VERSION 3.21)

project(main)



add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)
target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(main PRIVATE ${CMAKE_SOURCE_DIR}/3rdparty/add)

target_link_libraries(main PRIVATE ${CMAKE_SOURCE_DIR}/3rdparty/add/lib/add.lib)