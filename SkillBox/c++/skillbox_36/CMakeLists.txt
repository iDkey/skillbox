cmake_minimum_required(VERSION 3.21)
project(skillbox_36)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(skillbox_36 src/main.cpp src/circle.cpp header/circle.h)
target_link_libraries(skillbox_36
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

