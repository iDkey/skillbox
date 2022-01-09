
cmake_minimum_required(VERSION 3.20.0)

set(CMAKE_CXX_STANDARD 20)

project(task3 VERSION 0.1.0)

if (CMAKE_COMPILER_IS_GNUCXX)
    message ("Compiler set options...")
    add_compile_options(
            -Werror
            -pedantic-errors
            -Wall
            -Wextra
            -Wpedantic
            -Wcast-align
            -Wcast-qual
            -Wconversion
            -Wctor-dtor-privacy
            -Wduplicated-branches
            -Wduplicated-cond
            -Wextra-semi
            #-Wfloat-equal
            -Wlogical-op
            -Wnon-virtual-dtor
            -Wold-style-cast
            -Woverloaded-virtual
            -Wredundant-decls
            -Wsign-conversion
            -Wsign-promo
    )
else ()
    message ("Unknown compiler")
endif ()


add_subdirectory(src)