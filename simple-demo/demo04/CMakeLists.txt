cmake_minimum_required(VERSION 3.18)

PROJECT(lib_demo)

# 2. to get all source files
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src demo_src)

# 设置cmake搜索目录
# 设置 *Config.cmake 搜索路径
# set(cal_DIR ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/cal)

# 设置 Find*.cmake 搜索路径，
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

FIND_PACKAGE(cal REQUIRED )

if (NOT cal_FOUND)
    message(status "cal not found")
endif(cal_FOUND)

add_executable(${PROJECT_NAME} ${demo_src})

# 指定库头文件路径
target_include_directories(${PROJECT_NAME} PUBLIC ${cal_INCLUDE_DIR})
# 指定库名
target_link_libraries(${PROJECT_NAME} PUBLIC ${cal_LIBRARY})


# 编译生成后将dll拷贝到运行目录下
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/cal/lib/cal.dll
    ${CMAKE_BINARY_DIR}/Release)	




