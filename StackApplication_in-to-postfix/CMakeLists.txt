cmake_minimum_required(VERSION 3.8)
project(StackApplication_in_to_postfix)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c stack_and_tree.h)
add_executable(StackApplication_in_to_postfix ${SOURCE_FILES})