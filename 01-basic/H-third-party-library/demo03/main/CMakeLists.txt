cmake_minimum_required(VERSION 3.21)

project(main)


include(${CMAKE_SOURCE_DIR}/3rdparty/add/addConfig.cmake)
# set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/add)
# set(add_DIR ${CMAKE_SOURCE_DIR}/3rdparty/add)
find_package(add REQUIRED)
if(add_FOUND)
endif()

add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)
target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(main PRIVATE ${add_INCLUDE_DIR})

target_link_libraries(main PRIVATE ${add_LIBRARY})