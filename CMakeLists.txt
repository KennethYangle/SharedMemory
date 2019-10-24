cmake_minimum_required( VERSION 2.8 )
project( SharedMemory )

set( CMAKE_BUILD_TYPE Release )
set( CMAKE_CXX_FLAGS "-std=c++11 -pthread -O3" )         # 添加 C++ 11 标准支持

include_directories( ./include )

add_library( CShareMemory SHARED share_memory.cpp ) # 编译为共享库

add_executable( main_1 main_1.cpp )
add_executable( main_2 main_2.cpp )
target_link_libraries( main_1 CShareMemory )   # 添加动态链接库
target_link_libraries( main_2 CShareMemory ) 