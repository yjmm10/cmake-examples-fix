cmake_minimum_required(VERSION 3.5)

project(cmake_examples_install)

############################################################
# 创建动态库
############################################################

# 从源码中生成动态库
add_library(cmake_examples_inst SHARED
    src/Hello.cpp
)

# 目标链接到头文件目录，作用域为PUBLIC用于调用该模块的传播
target_include_directories(cmake_examples_inst
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

# windows下预处理
target_compile_definitions(cmake_examples_inst PRIVATE HELLO_EXPORT)

############################################################
# 创建可执行文件
############################################################

# 使用源码生成可执行文件
add_executable(cmake_examples_inst_bin
    src/main.cpp
)

# link the new hello_library target with the hello_binary target
# 将 hello_library 库链接到 hello_binary 目标中
target_link_libraries( cmake_examples_inst_bin
    PRIVATE 
        cmake_examples_inst
)


############################################################
# 安装
############################################################

# 安装可执行文件到目标路径 ${CMAKE_INSTALL_PREFIX}/bin
install (TARGETS cmake_examples_inst_bin
    DESTINATION bin)


# 安装库到目标路径 ${CMAKE_INSTALL_PREFIX}/lib
install (TARGETS cmake_examples_inst
    LIBRARY DESTINATION lib)

# 安装头文件到目标路径 ${CMAKE_INSTALL_PREFIX}/include
install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/ 
    DESTINATION include)

# 安装配置文件到目标路径 ${CMAKE_INSTALL_PREFIX}/etc
install (FILES cmake-examples.conf
    DESTINATION etc)
