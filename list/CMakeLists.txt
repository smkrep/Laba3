cmake_minimum_required(VERSION 3.20)

project(List)

add_library(list list.h list.cpp)

add_executable(list_test list_test.cpp)

target_link_libraries(list_test list)