cmake_minimum_required(VERSION 3.20)
add_executable(
        task3
        main.cpp
        MyMonitor.cpp
        kbd.cpp
)


target_include_directories(
        task3 PUBLIC
        ${MY_HEADER_DIR}
)