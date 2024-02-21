#include "Span.hpp"

int main(void) {
    //TODO: investigar lo de los rangos, investigar que algoritmo o container usar en este modulo
    //probar primero con el main easy del subject, y ya despues preocuparse por los 10000 numeros
    //TODO: testear a fondo shortest y longes spans y crear tests decentes. probar los tests del subject
    //crear la funcion para añadir muchos numeros

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
    
    //meter tests probando a añadir varios numeros a la vez pero que no quepan en el vector
    return (0);
}