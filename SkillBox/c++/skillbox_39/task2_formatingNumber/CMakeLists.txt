cmake_minimum_required(VERSION 3.21)
project(task2_formatingNumber)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(task2_formatingNumber main.cpp MainWindow.h MainWindow.cpp)
target_link_libraries(task2_formatingNumber
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

