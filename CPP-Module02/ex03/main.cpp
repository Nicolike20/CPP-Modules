#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
    Point const a(0, 0);
    Point const b(10, 30);
    Point const c(20, 0);
    Point const point(10, 15);
    Point const outside(30, 15);
    Point const limitTest(10, 1);
    Point const vertex(10, 30);
    Point const side(10, 0);

//    std::cout << "hola?\n" << a.getX() << " " << b.getX() << " " << c.getX() << " " << point.getX() << "\n";
//    bool res1 = bsp(a, b, c, point);        //dentro
//    bool res2 = bsp(a, b, c, otro);         //fuera
//    bool res3 = bsp(a, b, c,limitDentro);   //dentro
//    bool res4 = bsp(a, b, c, vertice);      //fuera
//    bool res5 = bsp(a, b, c, lado);         //fuera

	std::cout << "Point: (" << point.getX() << ", " << point.getY() << ")\n";
    if (bsp(a, b, c, point)) {			// dentro
        std::cout << "Inside\n\n";
    } else {
        std::cout << "Outside\n\n";
    }

	std::cout << "Point: (" << outside.getX() << ", " << outside.getY() << ")\n";
    if (bsp(a, b, c, outside)) {		// fuera
        std::cout << "Inside\n\n";
    } else {
        std::cout << "Outside\n\n";
    }

	std::cout << "Point: (" << limitTest.getX() << ", " << limitTest.getY() << ")\n";
    if (bsp(a, b, c,limitTest)) {		// dentro
        std::cout << "Inside\n\n";
    } else {
        std::cout << "Outside\n\n";
    }

	std::cout << "Point: (" << vertex.getX() << ", " << vertex.getY() << ")\n";
    if (bsp(a, b, c, vertex)) {			// fuera
        std::cout << "Inside\n\n";
    } else {
        std::cout << "Outside\n\n";
    }

	std::cout << "Point: (" << side.getX() << ", " << side.getY() << ")\n";
    if (bsp(a, b, c, side)) {			// fuera
        std::cout << "Inside\n\n";
    } else {
        std::cout << "Outside\n\n";
    }

    return 0;

//TODO: crear multiples tests en main; ->  testear esto a jierro;
//      cambiar nombre de las variables que estan en español
//      comprobar todos los detalles del modulo; quitar comentarios innecesarios;
}