# 指定cmake最低版本
cmake_minimum_required(VERSION 3.5)

# 设置项目名
project (hello_cmake)

# 获取当前目录下所有的源文件
aux_source_directory(. SRCS)

# 根据文件生成可执行文件
add_executable(hello_cmake ${SRCS})
