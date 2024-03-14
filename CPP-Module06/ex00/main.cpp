#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
    if (argc == 2) {
        std::string lit = argv[1];
        ScalarConverter::convert(lit);
    } else {
        std::cout << "Invalid number of arguments\n";
    }
    return (0);
}