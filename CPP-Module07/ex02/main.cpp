#include "Array.hpp"
#include <string>
#include <iostream>

int main(void) {
    /*default constructor*/
    Array<int> intArr(10);
    Array<std::string> strArr(5);
    
    for (int i = 0; i < 10; i++) {
        intArr[i] = i;
    }

    strArr[0] = "Hello";
    strArr[1] = "World";
    strArr[2] = "aaa";
    strArr[3] = "bbb";
    strArr[4] = "ccc";

    std::cout << "-int array-\nsize: " << intArr.size() << "\n";
    for (int i = 0; i < 10; i++) {
        std::cout << intArr[i] << " ";
    }
    std::cout << "\n";
    
    std::cout << "\n-string array-\nsize: " << strArr.size() << "\n";
    for (int i = 0; i < 5; i++) {
        std::cout << strArr[i] << " ";
    }
    std::cout << "\n";

    /*copy constructor*/
    const Array<int> intCopy(intArr);
    const Array<std::string> strCopy(strArr);
    std::cout << "\n-int copy array-\nsize: " << intCopy.size() << "\n";
    for (int i = 0; i < 10; i++) {
        std::cout << intCopy[i] << " ";
    }
    std::cout << "\n";
    
    std::cout << "\n-string copy array-\nsize: " << strCopy.size() << "\n";
    for (int i = 0; i < 5; i++) {
        std::cout << strCopy[i] << " ";
    }
    std::cout << "\n\n";
    
    /*out of bounds test*/
    try {
        intArr[-1] = 0;
    } catch (std::exception &e) {
        std::cout << e.what() << "\n";
    }

    try {
        intArr[10] = 0;
    } catch (std::exception &e) {
        std::cout << e.what() << "\n";
    }

    /*testing copies*/
    Array<int> tmp(intArr);
    std::cout << "\n-temp copy array-\nsize: " << tmp.size() << "\n";
    for (int i = 0; i < 10; i++) {
        std::cout << tmp[i] << " ";
    }

    for (int i = 0; i < 10; i++) { //change every number in tmp to 1
        tmp[i] = 1;
    }

    std::cout << "\n-int array-\nsize: " << intArr.size() << "\n";
    for (int i = 0; i < 10; i++) {
        std::cout << intArr[i] << " ";
    }

    std::cout << "\n-temp copy array-\nsize: " << tmp.size() << "\n";
    for (int i = 0; i < 10; i++) {
        std::cout << tmp[i] << " ";
    }

    for (int i = 0; i < 10; i++) { //change every number in intArr to 2
        intArr[i] = 2;
    }

    std::cout << "\n-int array-\nsize: " << intArr.size() << "\n";
    for (int i = 0; i < 10; i++) {
        std::cout << intArr[i] << " ";
    }

    std::cout << "\n-temp copy array-\nsize: " << tmp.size() << "\n";
    for (int i = 0; i < 10; i++) {
        std::cout << tmp[i] << " ";
    }

    /*int * test = new int();
    std::cout << "test: " << *test << "\n";*/
    //Try to compile int * a = new int(); then display *a


    //TODO ex00: comprobar en el subject si es importante lo de que sean la misma clase
    //TODO ex01: comprobar qué funciones suele hacer la gente para los test
    //TODO ex02: plantear mas tests y check subject
    /*en la eval hay tests que tienes que pasar con tu codigo y que funke,
    tengo lo que creo que es la version antigua del ex01.cpp y funciona con mi código,
    los otros dos no tengo ni idea de como son, renta investigar un poco antes de corregirlo
    y prepararse por si hay que ponerse a defender como un metapod*/
    return (0);
}

//system("leaks -q array");