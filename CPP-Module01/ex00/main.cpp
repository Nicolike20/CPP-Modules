#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );


//TODO: por que con randomchump no tengo que borrarlo?;
//TODO: mejor delete o llamada al destructor?;
//TODO: no podria usar newZombie en randomChump?;
//TODO: que cojones es lo de heap or stack?;
//TODO: por que no tengo que borrar a juan?;

int main(void) {
    Zombie *zom = new Zombie("Zombrero");
    zom->announce();
    delete zom;
//    zom->~Zombie();

    std::cout << "----------------\n";

    Zombie *test = newZombie("Test");
    test->announce();
    delete test;
//    test->~Zombie();

    std::cout << "----------------\n";

    randomChump("Paco");

    std::cout << "----------------\n";

    Zombie g("Juan");
    g.announce();
    //delete g;

 // system ("leaks -q zombies");
    return (0);
}
