cmake_minimum_required(VERSION 3.20)

add_executable(
        task1
        main.cpp
        Listgraph.cpp
        Matrixgraph.cpp
)

target_include_directories(
        task1 PUBLIC
        ${MY_HEADER_DIR}
)



