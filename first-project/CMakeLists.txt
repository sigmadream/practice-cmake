cmake_minimum_required(VERSION 3.20.0)
project(RentalBook CXX)

add_executable(RentalBook main.cpp)

add_subdirectory(books)
target_link_libraries(RentalBook PRIVATE books)