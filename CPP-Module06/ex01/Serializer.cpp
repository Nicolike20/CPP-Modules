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

static uintptr_t Serializer::serialize(Data* ptr) {
	uintptr_t ui;

	ui = reinterpret_cast<uintptr_t>(ptr); //algo asin;
	return ui;
} //revisar lo de static

static Data* Serialize::deserialize(uintptr_t raw) {
	Data* d; //reservar memoria pa esto?
			//crear estructura data;

	data = reinterpret_cast<Data*>(raw);
	return d;
}
		//reinterpret_cast o static_cast? (puedo usar reinterpret?)
		//stdint.h para incluir uintptr_t