cmake_minimum_required(VERSION 3.0)
project(pure_c C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_EXTENSIONS ON)

add_executable(pure_c main.c superlib.h superlib.c)
