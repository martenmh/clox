cmake_minimum_required(VERSION 3.15)
project(lox C)

set(CMAKE_C_STANDARD 11)


add_executable(lox
        src/chunk.c
        src/chunk.h
        src/common.h
        src/debug.c
        src/debug.h
        src/main.c
        src/memory.c
        src/memory.h
        src/value.c
        src/value.h
        src/vm.h
        src/vm.c)
