cmake_minimum_required(VERSION 3.21)
project(skillvox_36_console)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        REQUIRED)

add_executable(skillvox_36_console main.cpp)
target_link_libraries(skillvox_36_console
        Qt5::Core
        )

