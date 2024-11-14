#ifndef ITER_HPP_
# define ITER_HPP_

# include <cstddef>
# include <iostream>

template <class T> void printIter(T& i) {
    std::cout << i << " ";
}

template <class T> void printSum(T& i) {
    std::cout << i + i << " ";
}

template <class T> void iter(T *arr, size_t len, void (*f) (T&)) {
	if (arr == NULL || f == NULL)
		return ;
    for (size_t i = 0; i < len; i++) {
        f(arr[i]);
    }
};

#endif