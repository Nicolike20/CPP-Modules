#include "Array.hpp"
#include <iostream>

int main(void) {
    /*default constructor*/
    Array<int> a(10);
    std::cout << "size: " << a.size() << "\n";

    for (int i = 0; i < 10; i++) {
        a[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << "\n";

    /*copy constructor*/
    const Array<int> b(a);
    std::cout << "size: " << b.size() << "\n";
    for (int i = 0; i < 10; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << "\n";
    
    /*out of bounds test*/
    try {
        a[-1] = 0;
    } catch (std::exception &e) {
        std::cout << e.what();
    }

    try {
        a[10] = 0;
    } catch (std::exception &e) {
        std::cout << e.what();
    }






    //Try to compile int * a = new int(); then display *a
    //int * b = new int();
    //std::cout << *b << "\n";

    system("leaks -q array");
    //TODO: remove comments (and std::couts?) in constructors
    return (0);
}