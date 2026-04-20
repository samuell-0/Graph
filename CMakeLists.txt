cmake_minimum_required(VERSION 4.0.0)

project(Graph C)

add_library(Graph INTERFACE
)
target_include_directories(lib_sys INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include
)