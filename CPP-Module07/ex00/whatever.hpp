#include <iostream>

template <class T> void swap(T &x, T &y) {
    T temp;
    temp = x;
    x = y;
    y = temp;
}

template <class T> T min(T x, T y) {
    return x >= y ? y : x; //como checkeo que x e y son del mismo tipo? y que se pueden comparar?
}

template <class T> T max(T x, T y) {
    return x <= y ? y : x; //como checkeo que x e y son del mismo tipo? y que se pueden comparar?
}