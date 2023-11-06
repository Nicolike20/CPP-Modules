#include "Bureaucrat.hpp"

int main() {
	Bureaucrat b1("madio", 1);

    std::cout << "this is a test with " << b1.getName() << ", grade " << b1.getGrade() << "\n";
    b1.downgrade();
    b1.upgrade();
    b1.upgrade();
    return (0);
}
