#include "ScalarConverter.hpp"

//POR QUE STATIC_CAST??

int main(int argc, char **argv) {
    if (argc == 2) {
        std::string lit = argv[1];
        ScalarConverter::convert(lit);
    } else {
        std::cout << "Invalid number of arguments\n";
    }
    return (0);
}

//casos raros:
//126.20 sí, pero 126.20f no
//  A QUE SE REFIERE CON CONVERT EXPLICITLY EN EL SUBJECT?
//  CHECKEAR SUBJECT DE CORRECCION
//  POR QUE STATIC CAST?
