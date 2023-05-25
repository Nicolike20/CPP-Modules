#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
    Point const a(0, 0);
    Point const b(10, 30);
    Point const c(20, 0);
    Point const point(10, 15);
    Point const otro(10, 0);

    std::cout << "hola?\n" << a.getX() << " " << b.getX() << " " << c.getX() << " " << point.getX() << "\n";
    bool res = bsp(a, b, c, otro);
    if (res) {
        std::cout << "tamos dentro\n";
    } else {
        std::cout << "tamos fuera\n";
    }
    return 0;
//TODO: FALTA QUE PILLE VERTICES Y PERIMETRO COMO FUERA DEL AREA
//      crear multiples tests en main;
//      comprobar todos los detalles del modulo; quitar comentarios innecesarios;
}