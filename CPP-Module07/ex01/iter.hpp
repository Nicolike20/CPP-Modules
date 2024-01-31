#ifndef ITER_HPP_
# define ITER_HPP_

template <class T> void iter(T *arr, int len, void (*f) (const T&)) { //int len? size_t len?
    for (int i = 0; i < len; i++) {
        f(arr[i]);
    }
};

#endif

/*"There is no semantic difference between class and typename in a type-parameter-key."*/