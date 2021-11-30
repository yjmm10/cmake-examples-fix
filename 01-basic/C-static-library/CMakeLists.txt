cmake_minimum_required(VERSION 3.5)

project(hello_library)

############################################################
# 创建静态库
############################################################

# 从源码生成静态库
add_library(hello_library STATIC 
    src/Hello.cpp
)
# 目标链接头文件目录
target_include_directories(hello_library
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)


############################################################
# 创建可执行文件
############################################################

# 从源码生成可执行文件
add_executable(hello_binary 
    src/main.cpp
)

# 链接 hello_birary 到 hello_binary 目标
target_link_libraries( hello_binary
    PRIVATE 
        hello_library
)
