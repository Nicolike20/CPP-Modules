#include "Bureaucrat.hpp"

int main() {

    try {
		Bureaucrat b1("madio", 1); //esto aqui dentro o fuera del try?
    	std::cout << "this is a test with " << b1.getName() << ", grade " << b1.getGrade() << "\n";
        b1.downgrade();
        b1.upgrade();
        b1.upgrade();
    } catch (std::exception& e) {
        std::cout << e.what();
    }
	try {
    Bureaucrat test("test", 200);
	} catch (std::exception& e) {
		std::cout << e.what();
	}
    try {
    	Bureaucrat b2("lalini", 149);
		std::cout << b2 << "\n";
    	b2.downgrade();
    	b2.downgrade();
 		//b1.upgrade();
	} catch (std::exception& e) {
		std::cout << e.what();
	}
    return (0);
}
