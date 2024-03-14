#include <hello_object/hello_object.hpp>
#include <hello_header/hello_header.hpp>
#include <hello/hello.hpp>

int main() {
  hello_header::print_hello("John Doe");
  hello::Hello hello("Jane Doe");
  hello.greet();
  hello_object::HelloObject hello_object("Jane Doe");
  hello_object.greet();
  return 0;
}
