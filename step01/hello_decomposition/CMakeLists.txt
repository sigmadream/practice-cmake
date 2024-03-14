cmake_minimum_required(VERSION 3.27)

project(
    step01_pure-hello
    VERSION 1.0
    LANGUAGES CXX
)

add_executable(step01_pure-hello)
target_sources(step01_pure-hello PRIVATE hello.cpp)