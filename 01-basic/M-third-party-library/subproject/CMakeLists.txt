# cmake的最低版本
cmake_minimum_required(VERSION 3.5)

# 工程名称
project(hello_library)


find_package(ADD)
if(ADD_FOUND)
    target_include_directories(addtest PRIVATE ${ADD_INCLUDE_DIR})
    target_link_libraries(addtest ${ADD_LIBRARY})
else(ADD_FOUND)
    message(FATAL_ERROR "ADD library not found")
endif(ADD_FOUND)

############################################################
# 创建可执行文件
############################################################

# 基于源代码添加可执行文件
add_executable(hello_binary
    src/main.cpp
)

# 使用hello_library库的别名链接到hello_binary可执行文件
target_link_libraries( hello_binary
    PRIVATE 
        hello::library
)
