cmake_minimum_required(VERSION 3.27)

project(
    hello_object
    VERSION 1.0.0
    LANGUAGES CXX
)

add_library(hello_object OBJECT)
target_sources(hello_object PRIVATE src/hello_object.cpp)
target_compile_features(hello_object PUBLIC cxx_std_17)

target_include_directories(
    hello_object
    PRIVATE src/hello
    PUBLIC include
)
