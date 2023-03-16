#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main() {
    int N = 5;

    Zombie *horde = zombieHorde(N, "illo");
    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }
    delete[] horde;

    std::cout << "------------------------\n";

    N = 1;
    horde = zombieHorde(N, "test");
    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }
    delete[] horde;

    std::cout << "-------------------------\n";

    N = 0;
    horde = zombieHorde(N, "zero");
    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }
    delete[] horde;

    std::cout << "-------------------------\n";

    N = -6;
    horde = zombieHorde(N, "negative");
    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}

//    system ("leaks -q zombies");