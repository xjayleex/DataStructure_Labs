cmake_minimum_required(VERSION 3.8)
project(DS_lab4_k_th_number)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c adt.h adt.c)
add_executable(DS_lab4_k_th_number ${SOURCE_FILES})