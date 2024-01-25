#include "Array.hpp"
#include <iostream>

int main(void) {
    std::cout << "hola\n";
    Array<int> a(5);
    std::cout << a.size() << "\n";

    a[0] = 115;
    std::cout << a[0] << "\n";

    const Array<int> tumare(2);
    std::cout << tumare[0] << "\n";

    //Try to compile int * a = new int(); then display *a
    int * b = new int();
    std::cout << *b << "\n";

    system("leaks -q array"); //POR QUE NO DA LEAKS
    //TODO: check copy constructor and assignment operator, check leaks;
    //TODO: remove comments (and std::couts?) in constructors
    return (0);
}