cmake_minimum_required(VERSION 3.20)
add_executable(
        task2
        main.cpp
        kbd.cpp
        Train.cpp
)
target_include_directories(
        task2 PUBLIC
        ${MY_HEADER_DIR}
)