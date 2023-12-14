#include "ScalarConverter.hpp"

int main(void) {
//    (void)argc;
//    std::string s = argv[1];
    ScalarConverter::convert("asdf");
    ScalarConverter::convert("1.0");
    ScalarConverter::convert("1.0f");
    ScalarConverter::convert("1");
    ScalarConverter::convert("f");
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
    return (0);
}
