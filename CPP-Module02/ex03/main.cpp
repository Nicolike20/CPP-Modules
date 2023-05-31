#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {

	/*Triangle Points*/
    Point const a(0, 0);
    Point const b(10, 30);
    Point const c(20, 0);

    Point const nb(-10, 30);
    Point const nc(-20, 0);

	/*Testing Points*/
    Point const point(10, 15);
    Point const outside(30, 15);
    Point const limitTest(10, 1);
    Point const side(10, 0);
    Point const vertex(10, 30);
    Point const negInside(-10, 15);
    Point const negOutside(-30, 15);

	std::cout << "Point: (" << point.getX() << ", " << point.getY() << ")\n";
    if (bsp(a, b, c, point)) {			// Inside
        std::cout << "Inside\n\n";
    } else {
        std::cout << "Outside\n\n";
    }

	std::cout << "Point: (" << outside.getX() << ", " << outside.getY() << ")\n";
    if (bsp(a, b, c, outside)) {		// Outside
        std::cout << "Inside\n\n";
    } else {
        std::cout << "Outside\n\n";
    }

	std::cout << "Point: (" << limitTest.getX() << ", " << limitTest.getY() << ")\n";
    if (bsp(a, b, c,limitTest)) {		// Inside
        std::cout << "Inside\n\n";
    } else {
        std::cout << "Outside\n\n";
    }

	std::cout << "Point: (" << side.getX() << ", " << side.getY() << ")\n";
    if (bsp(a, b, c, side)) {			// Outside
        std::cout << "Inside\n\n";
    } else {
        std::cout << "Outside\n\n";
    }

	std::cout << "Point: (" << vertex.getX() << ", " << vertex.getY() << ")\n";
    if (bsp(a, b, c, vertex)) {			// Outside
        std::cout << "Inside\n\n";
    } else {
        std::cout << "Outside\n\n";
    }

    std::cout << "Point: (" << negInside.getX() << ", " << negInside.getY() << ")\n";
    if (bsp(a, nb, nc, negInside)) {	// Inside
        std::cout << "Inside\n\n";
    } else {
        std::cout << "Outside\n\n";
    }

    std::cout << "Point: (" << negOutside.getX() << ", " << negOutside.getY() << ")\n";
    if (bsp(a, nb, nc, negOutside)) {	// Outside
        std::cout << "Inside\n\n";
    } else {
        std::cout << "Outside\n\n";
    }

    std::cout << "Point: (" << point.getX() << ", " << point.getY() << ")\n";
    if (bsp(a, nb, nc, point)) {		// Outside
        std::cout << "Inside\n\n";
    } else {
        std::cout << "Outside\n\n";
    }

    return 0;
}