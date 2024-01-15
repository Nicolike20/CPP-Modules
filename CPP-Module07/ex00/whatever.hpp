#ifndef WHATEVER_HPP_
# define WHATEVER_HPP_

template <class T> void swap(T &x, T &y) {
    T temp;
    temp = x;
    x = y;
    y = temp;
}

template <class T> const T& min(const T& x, const T& y) {
    return x >= y ? y : x;
}

template <class T> const T& max(const T& x, const T& y) {
    return x <= y ? y : x;
}

#endif

/*The only requirement is
that the two arguments must have the same type and must support all the comparison
operators.*/