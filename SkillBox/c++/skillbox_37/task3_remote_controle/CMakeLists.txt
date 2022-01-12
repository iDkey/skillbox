cmake_minimum_required(VERSION 3.16)
project(37_3)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "I:\\Qt\\5.15.2\\mingw81_64\\lib\\cmake")


set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5Widgets REQUIRED)


add_executable(37_3
        main.cpp
        tv_controller.ui
        TvControllerWindow.cpp TvControllerWindow.h TvControllerWindow.cpp TvControllerWindow.h)
target_link_libraries(37_3 Qt5::Widgets)
