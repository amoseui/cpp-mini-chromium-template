cmake_minimum_required(VERSION 2.8.2)

add_definitions(-std=c++11)
add_definitions(-Werror)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_GLIBCXX_DEBUG")

set(SOURCE_FILES main.cc main.h)
add_executable(main ${SOURCE_FILES})
add_library(mainlib SHARED main)
