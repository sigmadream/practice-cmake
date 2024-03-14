#pragma once

#include <iostream>
#include <string>

namespace hello_header
{
    void print_hello(const std::string& name) {
        std::cout << "Hello " << name << " [from a only header]\n";
    }
}