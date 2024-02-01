#include "easyfind.hpp"

int main(void) {

    std::vector<int> v1;
    int n;

    for (int i = 0; i <= 5; i++) {
        v1.push_back(i);
    }

    std::cout << "Vector v1:";
    for (std::vector<int>::const_iterator i = v1.begin(); i != v1.end(); i++) {
        std::cout << " " << *i;
    }
    std::cout << "\n";

    std::vector<int>::const_iterator it;

    n = 0;
    it = easyfind(v1, n);
    if (it != v1.end()) {
        std::cout << "Element found: " << *it << "\n";
    } else {
        std::cout << "Element (" << n << ") not found\n";
    }

    n = 3;
    it = easyfind(v1, n);
    if (it != v1.end()) {
        std::cout << "Element found: " << *it << "\n";
    } else {
        std::cout << "Element (" << n << ") not found\n";
    }

    n = 6;
    it = easyfind(v1, n);
    if (it != v1.end()) {
        std::cout << "Element found: " << *it << "\n";
    } else {
        std::cout << "Element (" << n << ") not found\n";
    }

    n = -3;
    it = easyfind(v1, n);
    if (it != v1.end()) {
        std::cout << "Element found: " << *it << "\n";
    } else {
        std::cout << "Element (" << n << ") not found\n";
    }
    return (0);
}