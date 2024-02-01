#include "easyfind.hpp"

int main(void) {

    std::vector<int> v1;

    for (int i = 0; i <= 5; i++) {
        v1.push_back(i);
    }

    std::cout << "Vector v1:";
    for (std::vector<int>::const_iterator i = v1.begin(); i != v1.end(); i++) {
        std::cout << " " << *i;
    }
    std::cout << "\n";

    easyfind(v1, 3);
    easyfind(v1, 6);
    easyfind(v1, 5);
    //pulir los tests
    return (0);
}

//duso