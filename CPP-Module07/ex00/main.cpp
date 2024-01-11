#include "whatever.hpp"
#include <iostream> //
#include <string> //

int main(void) {
    int a = 2;
    int b = 3;

    ::swap(a, b); // asi o ::swap<int>(a, b)?
    std::cout << "a: " << a << ", b: " << b << "\n";

    std::string s1 = "string1";
    std::string s2 = "string2";

    ::swap(s1, s2); // asi o ::swap<std::string>(s1, s2)?
    std::cout << "s1: " << s1 << ", s2: " << s2 << "\n";
    return (0);
}