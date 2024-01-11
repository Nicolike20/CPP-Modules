#include <iostream>

template <class T> void swap(T &x, T &y) {
    T temp;
    temp = x;
    x = y;
    y = temp;
}

template <class T> T min(T x, T y) {} //check esto

template <class T> T max(T x, T y) {} //check esto