cmake_minimum_required(VERSION 3.20)

set(SOURCES task1.cpp
        task2.cpp)

#set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(algorithm ${SOURCES})



target_include_directories(algorithm PUBLIC ${TASK1_HEADER})