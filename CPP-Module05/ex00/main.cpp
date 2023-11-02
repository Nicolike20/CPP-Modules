#include "Bureaucrat.hpp"

int main() {
	Bureaucrat b1("madio", 1);

    std::cout << "this is a test with " << b1.getName() << ", grade " << b1.getGrade() << "\n";
    return (0);
}
