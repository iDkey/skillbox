cmake_minimum_required(VERSION 3.20.2)
project(task2)

set(CMAKE_CXX_STANDARD 20)
set(JSON_BuildTests OFF CACHE INTERNAL "")

add_subdirectory(nlohmann_json)

add_subdirectory(src)
set(MY_HEADER_DIR ${CMAKE_SOURCE_DIR}/header)
target_link_libraries(task2 PRIVATE nlohmann_json::nlohmann_json)









