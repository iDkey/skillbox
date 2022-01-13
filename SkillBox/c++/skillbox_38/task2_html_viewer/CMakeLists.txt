cmake_minimum_required(VERSION 3.16)
project(task2_html_viewer)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)




set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core Widgets WebEngineWidgets REQUIRED)

add_executable(task2_html_viewer
        main.cpp
        QMainWindow.h
        )

target_link_libraries(task2_html_viewer Qt5::Widgets Qt5::Core Qt5::WebEngineCore Qt5::WebEngineWidgets)