cmake_minimum_required(VERSION 3.21)
project(mydll)

add_library(mydll SHARED mydll.cpp)
target_include_directories(mydll PUBLIC include)
# target_compile_definitions(mydll PRIVATE MYDLL_EXPORTS)

# target_include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(main main.cpp)
target_include_directories(main PRIVATE include)
target_link_libraries(main PRIVATE ${CMAKE_SOURCE_DIR}/build/Debug/mydll.lib)

# target_link_libraries(${CMAKE_SOURCE_DIR}/build/Release/)

