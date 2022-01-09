cmake_minimum_required(VERSION 3.21)
project(task1_calculator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(task1_calculator main.cpp calcUI.ui calc_mainWindow.cpp calc_mainWindow.h)
target_link_libraries(task1_calculator
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

