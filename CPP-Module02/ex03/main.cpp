#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
    Point const a(0, 0);
    Point const b(10, 30);
    Point const c(20, 0);
    Point const point(10, 15);
    Point const otro(30, 15);
    Point const limitDentro(10, 1);
    Point const vertice(10, 30);
    Point const lado(10, 0);

//    std::cout << "hola?\n" << a.getX() << " " << b.getX() << " " << c.getX() << " " << point.getX() << "\n";
    bool res1 = bsp(a, b, c, point);        //dentro
    bool res2 = bsp(a, b, c, otro);         //fuera
    bool res3 = bsp(a, b, c,limitDentro);   //dentro
    bool res4 = bsp(a, b, c, vertice);      //fuera    -> probar imprimiendo las areas a ver que pasa
    bool res5 = bsp(a, b, c, lado);         //fuera
    if (res1) {
        std::cout << "tamos dentro\n"; //estos if else se tienen que poder hacer mas clean fs;
    } else {
        std::cout << "tamos fuera\n";
    }

    if (res2) {
        std::cout << "tamos dentro\n";
    } else {
        std::cout << "tamos fuera\n";
    }

    if (res3) {
        std::cout << "tamos dentro\n";
    } else {
        std::cout << "tamos fuera\n";
    }

    if (res4) {
        std::cout << "tamos dentro\n";
    } else {
        std::cout << "tamos fuera\n";
    }

    if (res5) {
        std::cout << "tamos dentro\n";
    } else {
        std::cout << "tamos fuera\n";
    }

    return 0;
//TODO: FALTA QUE PILLE VERTICES Y PERIMETRO COMO FUERA DEL AREA
//      crear multiples tests en main;
//      cambiar nombre de las variables que estan en español
//      comprobar todos los detalles del modulo; quitar comentarios innecesarios;
}