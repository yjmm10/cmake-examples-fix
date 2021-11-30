# cmake的最低版本
cmake_minimum_required(VERSION 3.5)

# 工程名称
project(hello_library)

############################################################
# 创建库
############################################################

#从源码中生成动态库
add_library(hello_library SHARED 
    src/Hello.cpp
)
# 创建库的别名
add_library(hello::library ALIAS hello_library)

# 指定库包含的头文件路径
target_include_directories(hello_library
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

target_compile_definitions(hello_library PRIVATE HELLO_EXPORT)

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(hello_binary
    src/main.cpp
)

# link the new hello_library target with the hello_binary target
target_link_libraries( hello_binary
    PRIVATE 
        hello::library
)
