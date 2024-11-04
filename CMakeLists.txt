cmake_minimum_required(VERSION 3.29)
project(ccode C)

set(CMAKE_C_STANDARD 11)

add_executable(ccode
        enums/enum.c
        scope/scope.c
        swap/swap.c
        scope/counter.c
        arrays/array.c
        operators/bitwise.c
        mortgageCalc/mortgage.c
        loops/loops.c
        CBOOK/section1.c
        struct/struct.c
        struct/struct.c
        qualifiers/qualifier.c)
