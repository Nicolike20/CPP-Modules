#include "Span.hpp"

int main(void) {
    //TODO: investigar lo de los rangos, investigar que algoritmo o container usar en este modulo
    //probar primero con el main easy del subject, y ya despues preocuparse por los 10000 numeros

    Span s(10);

    try {
        s.addNumber(1);
        s.addNumber(1);
        s.addNumber(5);
        s.addNumber(5);
        s.addNumber(5);
        s.addNumber(5);
        s.addNumber(7);
        s.addNumber(8);
        s.addNumber(9);
        s.addNumber(10);
        s.addNumber(11);
    } catch (std::exception &e) {
        std::cout << e.what() << "\n";
    }

    return (0);
}