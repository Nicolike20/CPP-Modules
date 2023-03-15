#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {
//    Zombie zom = Zombie(name);
//    Zombie zom = new Zombie(name);
    return (new Zombie(name));
}