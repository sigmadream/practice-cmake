#include <iostream>
#include "books/book.hpp"

int main() {
    std::cout << "A book rental" << std::endl;
    Book book;
    std::cout << book.title() << std::endl;
    return 0;
}
