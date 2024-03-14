cmake_minimum_required(VERSION 3.27)

project(
    step01
    VERSION 1.0
    LANGUAGES CXX
)

add_subdirectory(hello_header)
add_subdirectory(hello_static_lib)
add_subdirectory(hello_shared_lib)
add_subdirectory(hello_object_lib)

add_executable(step01)
target_sources(step01 PRIVATE src/main.cpp)
target_link_libraries(step01 PRIVATE hello_header hello_shared hello_object)