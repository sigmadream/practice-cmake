cmake_minimum_required(VERSION 3.27)

project(
    hello_header
    VERSION 1.0
    LANGUAGES CXX
)

add_library(hello_header INTERFACE)
target_include_directories(hello_header INTERFACE include/)
target_compile_features(hello_header INTERFACE cxx_std_17)