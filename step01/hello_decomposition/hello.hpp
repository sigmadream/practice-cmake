#include <string>
#include <iostream>

namespace hello
{
    void print_hello(const std::string& name) {
        std::cout << "Hello " << name << std::endl;
    }
    class Hello {
    public:
        Hello(const std::string& name) : name_{name} {}
        void greet() const {
            std::cout << "Hello " << name_ << std::endl;
        }
    private:
        const std::string name_;
    };
}