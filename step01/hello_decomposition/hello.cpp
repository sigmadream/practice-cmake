#include "hello.hpp"

int main() {
    hello::print_hello("John Doe");
    hello::Hello hello("Jane Doe");
    hello.greet();
    return 0;
}