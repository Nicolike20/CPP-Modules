#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
    /*(void)argc;
    std::string s = argv[1];
    ScalarConverter::convert("asdf");
    ScalarConverter::convert("1.0");
    ScalarConverter::convert("42.2f");
    ScalarConverter::convert("42");
    ScalarConverter::convert("*");
    ScalarConverter::convert("nanf");
    ScalarConverter::convert("-1");
    ScalarConverter::convert("10");
    ScalarConverter::convert(".f");
    ScalarConverter::convert("f..");
    ScalarConverter::convert(".1f");
    ScalarConverter::convert("-10.0f");
    ScalarConverter::convert(".");
    ScalarConverter::convert(".1");
    ScalarConverter::convert("1.");
    ScalarConverter::convert(".f10");
    ScalarConverter::convert("-.f");
    ScalarConverter::convert("-10.0");
    ScalarConverter::convert("-");
    ScalarConverter::convert("123-123");
    ScalarConverter::convert("ff");*/
    if (argc == 2) {
        std::string lit = argv[1];
        ScalarConverter::convert(lit);
    } else {
        std::cout << "Invalid number of arguments\n";
    }
    return (0);
}

//casos raros:
//  02
