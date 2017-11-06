cmake_minimum_required(VERSION 3.8)
project(DS_lab3_postfix_to_parseTree)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c adt.c adt.h)
add_executable(DS_lab3_postfix_to_parseTree ${SOURCE_FILES})