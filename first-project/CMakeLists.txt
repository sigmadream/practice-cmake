cmake_minimum_required(VERSION 3.20)

project(RentalBook CXX)

include(books/books.cmake)

add_executable(RentalBook main.cpp ${books_sources})