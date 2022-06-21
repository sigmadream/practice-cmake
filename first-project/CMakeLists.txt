cmake_minimum_required(VERSION 3.20.0)
project(RentalBook CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(RentalBook main.cpp)

add_subdirectory(books)
target_link_libraries(RentalBook PRIVATE books)