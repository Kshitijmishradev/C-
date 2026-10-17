#include <iostream>
#include <syncstream>

int main()
{
    std::osyncstream(std::cout) << "Hello from C++20!\n";
    return 0;
}