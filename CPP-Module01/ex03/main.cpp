//#include <string>
//#include <iostream>

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {

//	std::cout << "lmao\n";
	{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}
 	{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}
return 0;
}

//  system("leaks -q test");

//TODO: ^pasar las referencias tiene que ser siempre con const? o da igual?

/*To assign a reference in a constructor you need to have a reference member

 class A{
     std::string& str;
 public:
     A(std::string& str_)
     :    str(str_) {} 
 };
str is now a reference to the value you passed in. Same applies for const refs

 class A{
     const std::string& str;
 public:
     A(const std::string& str_)
     :    str(str_) {} 
 };
However don't forget that once a reference has been assigned it can not be changed
so if assignment requires a change to str then it will have to be a pointer instead.*/