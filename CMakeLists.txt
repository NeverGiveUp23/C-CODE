cmake_minimum_required(VERSION 3.29)
project(ccode C)

set(CMAKE_C_STANDARD 11)

add_executable(ccode
        advanced/varlengtharr.c)
