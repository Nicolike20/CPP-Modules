#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

//- new (o malloc) te reserva memoria en el heap y por eso hay que liberarla;
//- si no se usa new, las variables se crean en el stack;
//- "Zombie *zom = new Zombie("Zombrero");" crea una variable en el stack que
//  apunta a una direccion de memoria en el heap;
//- "Zombie zom("paco");" crea la variable en el stack y se liberara al terminar el scope;

int main() {
    Zombie *zom = new Zombie("Zombrero");
    zom->announce();
    delete zom;

    std::cout << "----------------\n";

    Zombie *test = newZombie("Test");
    test->announce();
    delete test;

    std::cout << "----------------\n";

    randomChump("Paco");

    std::cout << "----------------\n";

    Zombie g("Juan");
    g.announce();

    return 0;
}

 // system ("leaks -q zombies");