#include "Span.hpp"

int main(void) {
    //TODO: testear a fondo shortest y longes spans y crear tests decentes. probar los tests del subject
    //TODO: deberia estar usando mas algoritmos en addMore()?

    //*
    Span s(10);

    try {
        s.addNumber(1);
        s.addNumber(3);
        s.addNumber(5);
        s.addNumber(7);
        s.addNumber(700);
        s.addNumber(7000);
        s.addNumber(7487);
        s.addNumber(74578);
        s.addNumber(74577);
        s.addNumber(10);
        s.addNumber(11);
    } catch (std::exception &e) {
        std::cout << e.what() << "\n";
    }

    

    std::cout << "Span after adding numbers:";
    s.printSpan();

    std::cout << "Longest span: " << s.longestSpan() << "\n"; //meter tests try catch con spans vacios
    std::cout << "Shortest span: " << s.shortestSpan() << "\n";
    
    std::vector<int> v(10000);
    for (int i = 0; i < 10000; i++) {
        v[i] = i;
    }

    Span s2(10000);
    try {
        s2.addMore(v.begin(), v.end());
        std::cout << "Longest span: " << s2.longestSpan() << "\n";
        std::cout << "Shortest span: " << s2.shortestSpan() << "\n";
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }
    /*/

    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    //*/

    return (0);
}