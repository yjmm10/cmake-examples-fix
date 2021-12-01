# 指定cmake最低版本
cmake_minimum_required(VERSION 3.5)

# 设置项目名
project (hello_headers)

# 创建源文件变量用于编译的源文件
set(SOURCES
    src/Hello.cpp
    src/main.cpp
)

# 根据上述的源文件变量生成可执行文件
add_executable(hello_headers ${SOURCES})

# 设置头文件所在目录，以便在编译时候将头文件包含到项目
target_include_directories(hello_headers
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)
