#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
    Point const a(0, 0);
    Point const b(10, 30);
    Point const c(20, 0);
    Point const point(10, 15);

    std::cout << "hola?\n" << a.getX() << " " << b.getX() << " " << c.getX() << " " << point.getX() << "\n";
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