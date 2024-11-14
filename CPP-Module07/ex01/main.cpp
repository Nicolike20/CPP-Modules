#include "iter.hpp"
#include <string>

int main(void) {
    int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::string words[10] = {"test", "hello", "world", "42", "string", "aaa", "bbb", "ccc", "ddd", "eee"};

    std::cout << "Number array test:\n";
    ::iter(numbers, 10, &printIter);
    std::cout << "\n";
    ::iter(numbers, 10, &printSum);

    std::cout << "\nString array test:\n";
    ::iter(words, 10, &printIter);
    std::cout << "\n";
    ::iter(words, 10, &printSum);

    return (0);
}