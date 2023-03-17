#include "HumanA.hpp"

#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : name_(name), weapon_(weapon) {}
    //name_ = name;
    //weapon_ = weapon;
//}

HumanA::~HumanA() {}

void HumanA::attack(){
    std::cout << name_ << " attacks with their " << weapon_.getType() << "\n";
}

//TODO entender todo esto mejor