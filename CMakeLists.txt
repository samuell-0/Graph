cmake_minimum_required(VERSION 4.0.0)
project(graph C)

add_library(graph STATIC)

target_include_directories(graph PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_sources(graph PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src/graph_path.c
)

add_executable(test_graph test.c)

target_link_libraries(test_graph PRIVATE graph)
