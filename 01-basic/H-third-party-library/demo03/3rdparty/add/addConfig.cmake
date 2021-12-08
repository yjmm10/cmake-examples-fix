
FIND_PATH(add_INCLUDE_DIR add.h ${CMAKE_CURRENT_LIST_DIR})

FIND_LIBRARY(add_LIBRARY add.lib ${CMAKE_CURRENT_LIST_DIR}/lib)

set(add_FOUND FALSE)
if(add_INCLUDE_DIR AND add_LIBRARY)
    # message("add found !!!")
    set(add_FOUND TRUE)
endif()

# set(add_INCLUDE_DIRS "${CMAKE_CURRENT_LIST_DIR}/include")
# include_directories(${add_INCLUDE_DIRS})
# link_directories(${CMAKE_CURRENT_LIST_DIR}/lib)
# set(add_LIBS add)