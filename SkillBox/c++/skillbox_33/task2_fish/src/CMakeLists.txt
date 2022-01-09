cmake_minimum_required(VERSION 3.20.0)

set(SOURCES main.cpp fish.cpp)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(Fish ${SOURCES})

target_include_directories(Fish PUBLIC ${MY_HEADER_DIR})