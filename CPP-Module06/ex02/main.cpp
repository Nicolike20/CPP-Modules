#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

//POR QUE DYNAMIC_CAST?

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
    std::cout << "yeah base *p  vvv\n";
    if (dynamic_cast<A*>(p) != NULL) {
        std::cout << "CLASS TYPE A\n";
    } else if (dynamic_cast<B*>(p) != NULL) {
        std::cout << "CLASS TYPE B\n";
    } else if (dynamic_cast<C*>(p) != NULL) {
        std::cout << "CLASS TYPE C\n";
    }
    std::cout << "yeah base *p  ^^^\n";
}

void identify(Base& p) {
    std::cout << "yeah base &p  vvv\n";
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
    std::cout << "yeah base &p  ^^^\n";
}
 /*Yes, this is correct behaviour. The reason is that you can have a null pointer,
 but not a null reference - any reference has to be bound to an object.

So when dynamic_cast for a pointer type fails it returns a null
pointer and the caller can check for that, but when it fails for a reference type it can't
return a null reference, so an exception is the only reasonable way to signal a problem.*/

int main() {
    
    Base *b = generate();
    identify(b);  //puntero
    identify(*b); //ref
    delete b;
    return (0);
}