cmake_minimum_required(VERSION 3.20)
project(task1)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)



set(CMAKE_CXX_STANDARD_REQUIRED ON)



find_package(Qt5 COMPONENTS Core Widgets Multimedia MultimediaWidgets REQUIRED)


add_executable(task1
        main.cpp

        )
include_directories(bin)
target_link_libraries(task1 Qt5::Widgets Qt5::Core Qt5::Multimedia Qt5::MultimediaWidgets)


