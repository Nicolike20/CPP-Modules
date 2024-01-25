#include "Array.hpp"
#include <iostream>

int main(void) {
    std::cout << "hola\n";
    Array<int> a(5);
    std::cout << a.size() << "\n";

    a[0] = 115;
    std::cout << a[0] << "\n";

    const Array<int> tumare(2);
    tumare[0] = 115;
    std::cout << tumare[0] << "\n";
    //TODO: operator[], check copy constructor and assignment operator, check leaks;
    return (0);
}