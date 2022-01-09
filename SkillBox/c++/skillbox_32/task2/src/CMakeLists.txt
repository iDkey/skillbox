cmake_minimum_required(VERSION 3.20.2)

set(JSON_BuildTests OFF CACHE INTERNAL "")

file(GLOB SRC_FILES *.cpp)
add_executable(
        task2
        ${SRC_FILES}
)

target_include_directories(
        task2 PUBLIC
        ${MY_HEADER_DIR}
)


target_link_libraries(task2 PRIVATE nlohmann_json::nlohmann_json)



