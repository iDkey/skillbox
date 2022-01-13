cmake_minimum_required(VERSION 3.21)
project(task1_appAnimating)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)




find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED
        Qml
        )

add_executable(task1_appAnimating main.cpp)
target_link_libraries(task1_appAnimating
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        Qt5::Qml

        )

