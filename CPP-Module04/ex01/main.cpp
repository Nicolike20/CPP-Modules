#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

//TODO: deep copy?; -> check si está bien hecho;
//TODO: check explicacion d e virtual destructor en github;
//TODO: check leaks;
//TODO: que era lo de poner const al final del prototipo?;

int main()
{
	const Animal* animal = new Animal();
	const Dog* dog = new Dog();
	const Cat* cat = new Cat();

	std::cout << "\n";

	std::cout << animal->getType() << "\n";
	std::cout << dog->getType() << "\n";
	std::cout << cat->getType() << "\n";
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();

	std::cout << "\n";

	cat->getBrain()->_ideas[0] = "idea0"; //giving ideas to the cat's brain
	cat->getBrain()->_ideas[1] = "idea1";

	std::cout << "Cat idea #0: " << cat->getBrain()->_ideas[0] << "\n";
	std::cout << "Cat idea #1: " << cat->getBrain()->_ideas[1] << "\n";

	Cat *cat2 = new Cat(); //create new cat

	std::cout << "Cat2 idea #0: " << cat2->getBrain()->_ideas[0] << "\n";
	std::cout << "Cat2 idea #1: " << cat2->getBrain()->_ideas[1] << "\n";

	*cat2 = *cat; //copy cat to cat2;

	std::cout << "Cat2 idea #0: " << cat2->getBrain()->_ideas[0] << "\n";
	std::cout << "Cat2 idea #1: " << cat2->getBrain()->_ideas[1] << "\n";

	cat->getBrain()->_ideas[0] = "no idea";

	std::cout << "Cat idea #0: " << cat->getBrain()->_ideas[0] << "\n";
	std::cout << "Cat idea #1: " << cat->getBrain()->_ideas[1] << "\n";
	std::cout << "Cat2 idea #0: " << cat2->getBrain()->_ideas[0] << "\n";
	std::cout << "Cat2 idea #1: " << cat2->getBrain()->_ideas[1] << "\n";

	std::cout << "\n";
	
	delete animal;
	delete dog;
	delete cat;
	delete cat2;

	std::cout << "\n";

	//testing array of animals

	Animal *animals[8];

	for (int i = 0; i < 8; i++) {
		if (i < 8 / 2) {
			animals[i] = new Dog();
		} else {
			animals[i] = new Cat();
		}
	}

	for (int i = 0; i < 8; i++) {
		std::cout << "animal type: " << animals[i]->getType() << "\n";
	}

	for (int i = 0; i < 8; i++) {
		delete animals[i];
	}

	return 0;
}
