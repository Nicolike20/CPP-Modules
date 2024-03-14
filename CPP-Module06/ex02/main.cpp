#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

Base * generate(void) {
    std::srand(std::time(NULL));
    int mod = rand() % 3;
    if (mod == 0) {
        std::cout << "Object A created\n";
        return (new A);
    } else if (mod == 1) {
        std::cout << "Object B created\n";
        return (new B);
    } else if (mod == 2) {
        std::cout << "Object C created\n";
        return (new C);
    }
    std::cout << "Error: couldn't instanciate class\n";
    return NULL;
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p) != NULL) {
        std::cout << "CLASS TYPE A\n";
    } else if (dynamic_cast<B*>(p) != NULL) {
        std::cout << "CLASS TYPE B\n";
    } else if (dynamic_cast<C*>(p) != NULL) {
        std::cout << "CLASS TYPE C\n";
    }
}

void identify(Base& p) {
    try {
        A &tmp = dynamic_cast<A&>(p);
        std::cout << "CLASS TYPE A\n";
        (void) tmp;
    } catch (std::bad_cast e) {}
    try {
        B &tmp = dynamic_cast<B&>(p);
        std::cout << "CLASS TYPE B\n";
        (void) tmp;
    } catch (std::bad_cast e) {}
    try {
        C &tmp = dynamic_cast<C&>(p);
        std::cout << "CLASS TYPE C\n";
        (void) tmp;
    } catch (std::bad_cast e) {}
}

int main() {
    
    Base *b = generate();
    identify(b);
    identify(*b);
    delete b;
    return (0);
}