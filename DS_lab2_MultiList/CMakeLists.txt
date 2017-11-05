cmake_minimum_required(VERSION 3.8)
project(DS_lab2_MultiList)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c mList.h mList.c)
add_executable(DS_lab2_MultiList ${SOURCE_FILES})