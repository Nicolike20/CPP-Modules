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

//casos raros:
//  02 //renta preocuparse por esto?
//  12.12 (checkea 12.10) // renta preocuparse por esto?
//  1234567 || -1234567
//  headers para numerical limits? and special values?
//  checkear mas cosas
//  A QUE SE REFIERE CON CONVERT EXPLICITLY EN EL SUBJECT?
//  CHECKEAR SUBJECT DE CORRECCION

    /*
    (void)argc;
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
    ScalarConverter::convert("ff");
    */