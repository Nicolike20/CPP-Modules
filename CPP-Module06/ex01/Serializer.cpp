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

uintptr_t Serializer::serialize(Data* ptr) {
	uintptr_t ui;

	ui = reinterpret_cast<uintptr_t>(ptr); //algo asin;
	return ui;
}

Data* Serializer::deserialize(uintptr_t raw) {
	Data* d; //reservar memoria pa esto?

	d = reinterpret_cast<Data*>(raw);
	return d;
}

/*reinterpret_cast only guarantees that if you cast a pointer to a different type, 
and then reinterpret_cast it back to the original type, you get the original value.*/