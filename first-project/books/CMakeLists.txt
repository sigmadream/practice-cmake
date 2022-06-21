cmake_minimum_required(VERSION 3.20.0)
project(BookProject CXX)
add_library(books OBJECT book.cpp)
target_include_directories(books PUBLIC .)