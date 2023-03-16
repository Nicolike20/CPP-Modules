#include <string>
#include <iostream>

int main() {
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "string:    " << string << "\n";
    std::cout << "stringPTR: " << stringPTR << "\n";
    std::cout << "stringREF: " << stringREF << "\n";

    //TODO: continuar esto, y entender mejor las referencias;
    return 0;
}

//    system ("leaks -q zombies");