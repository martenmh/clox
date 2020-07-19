cmake_minimum_required(VERSION 3.12)
project(lox C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(lox
        include/common.h
        include/memory.h    src/memory.c
        include/value.h     src/value.c
        include/object.h    src/object.c
        include/scanner.h   src/scanner.c
        include/compiler.h  src/compiler.c
        include/chunk.h     src/chunk.c
        include/debug.h     src/debug.c
        include/vm.h        src/vm.c
        include/table.h     src/table.c
        src/main.c
        )
