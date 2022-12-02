cmake_minimum_required(VERSION 3.20)
project(c_exer C)

set(CMAKE_C_STANDARD 99)

add_executable(c_exer src/main.c include/main.h src/func.c)
