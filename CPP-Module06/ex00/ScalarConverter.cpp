#include "ScalarConverter.hpp"
		
ScalarConverter() {
    std::cout << "ScalarConverter default constructor called\n";
}
ScalarConverter(const ScalarConverter &copy) {
    //*this = copy;
    std::cout << "ScalarConverter copy constructor called\n";
}

~ScalarConverter() {
    std::cout << "ScalarConverter copy destructor called\n";
}

ScalarConverter& operator=(const ScalarConverter &other); //cozas