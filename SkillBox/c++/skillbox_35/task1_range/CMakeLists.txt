cmake_minimum_required(VERSION 3.21)
project(task1_range)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        REQUIRED)

add_executable(task1_range main.cpp)
target_link_libraries(task1_range
        Qt5::Core
        )

