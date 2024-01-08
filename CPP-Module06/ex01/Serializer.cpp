#include "Serializer.hpp"

Serializer::Serializer() {
	std::cout << "Seralizer default constructor called\n";
}

Serializer::Serializer(const Serializer &copy) {
	*this = copy;
	std::cout << "Serializer copy constructor called\n";
}

Serializer::~Serializer(){
	std::cout << "Serializer destructor called\n";
}

Serializer& Serializer::operator=(const Serializer &other){
	(void) other;
	return *this;
}

        static uintptr_t serialize(Data* ptr); //revisar static
        static Data* deserialize(uintptr_t raw);