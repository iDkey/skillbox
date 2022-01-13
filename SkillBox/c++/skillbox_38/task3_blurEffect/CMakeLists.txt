cmake_minimum_required(VERSION 3.20)
project(task3_BlurEffect)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)




set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

add_executable(task3_BlurEffect
        main.cpp
         BlurEffect.h)

target_link_libraries(task3_BlurEffect Qt5::Widgets Qt5::Core)