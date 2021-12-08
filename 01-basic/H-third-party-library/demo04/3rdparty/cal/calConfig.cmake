# ＃　指定库头文件所在路径
FIND_PATH(cal_INCLUDE_DIR cal.h ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/cal/include)
message("jjjjj${CMAKE_CURRENT_SOURCE_DIR}")

# ＃　指定库文件所在路径
FIND_LIBRARY(cal_LIBRARY cal.lib ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/cal/lib)

# ＃　为了下游可以继续使用
set(cal_FOUND FALSE)
if (cal_INCLUDE_DIR AND cal_LIBRARY)
	set(cal_FOUND TRUE)
endif()
mark_as_advanced(cal_INCLUDE_DIRS cal_LIBS )