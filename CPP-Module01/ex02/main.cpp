#include <string>
#include <iostream>

// La referencia es casi como un ""alias"" para la variable. es simplemente otra
// variable que comparte la misma direccion de memoria, si se cambia una se cambia
// la otra. La diferencia con el puntero es que el puntero apunta a esa direccion,
// que contiene el valor de la otra variable, mientras que la referencia la comparte;

// ^version de la explicacion por ChatGPT: Una referencia es una variable que se refiere
// o "apunta" a otra variable en la memoria, es decir, es una especie de "alias" para esa variable.
// Al igual que una variable normal, una referencia tiene un nombre y un tipo de datos,
// pero a diferencia de una variable normal, una referencia no tiene una dirección de memoria propia.
// En su lugar, se refiere a la dirección de memoria de la variable original.
// Por lo tanto, cualquier cambio que se haga en la referencia se reflejará en la variable original.

//Un puntero, por otro lado, es una variable que almacena la dirección de memoria de otra variable.
// En lugar de compartir la dirección de memoria con la variable original, el puntero apunta a esa dirección.
// A través del puntero, es posible acceder y modificar el valor de la variable original,
// pero el puntero en sí mismo no es la variable original.

//En resumen, una referencia es una variable que se refiere directamente a otra variable,
// mientras que un puntero es una variable que almacena la dirección de memoria de otra variable.
// Ambos tienen su propio conjunto de ventajas y desventajas, y se utilizan en diferentes situaciones en C++.

int main() {
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "string:    " << &string << "\n";
    std::cout << "stringPTR: " << stringPTR << "\n";
    std::cout << "stringREF: " << &stringREF << "\n";

    std::cout << "-----------------------------------\n";

    std::cout << "string:    " << string << "\n";
    std::cout << "stringPTR: " << *stringPTR << "\n";
    std::cout << "stringREF: " << stringREF << "\n";
    return 0;
}