cmake_minimum_required(VERSION 3.21)
project(task2_unorderedSet)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(task2_unorderedSet main.cpp)
target_link_libraries(task2_unorderedSet
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

