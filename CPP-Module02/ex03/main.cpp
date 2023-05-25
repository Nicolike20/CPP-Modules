#include "Point.hpp"

int main( void ) {
    Point a(0, 0);
    Point b(10, 30);
    Point c(20, 0);
    Point point(10, 15);

    bool res = bsp(a, b, c, point);
    if (res) {
        std::cout << "tamos dentro\n";
    } else {
        std::cout << "tamos fuera\n";
    }
    return 0;
//TODO: buscar funcion de bsp e implementarla; ver si falta algo en Point.hpp;
//      comprobar todos los detalles del modulo; quitar comentarios innecesarios;
}