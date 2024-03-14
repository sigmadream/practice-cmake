cmake_minimum_required(VERSION 3.27)

project(
    step00_hello_world_standalone
    VERSION 1.0
    LANGUAGES CXX
)

add_executable(step00_hello_world_standalone)
target_sources(step00_hello_world_standalone PRIVATE src/main.cpp)
