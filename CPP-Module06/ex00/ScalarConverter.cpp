#include "ScalarConverter.hpp"
		
ScalarConverter::ScalarConverter() {
	std::cout << "ScalarConverter default constructor called\n";
}
ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
	*this = copy; //klk;
	std::cout << "ScalarConverter copy constructor called\n";
}

ScalarConverter::~ScalarConverter() {
	std::cout << "ScalarConverter copy destructor called\n";
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other){
	if (this != &other) {
		return *this;
	}
	return *this; //klk;
} //cozas

//0 invalid; 1 double; 2 float; 3 int; 4 char; 5 others;
void ScalarConverter::convert(const std::string &lit) {
	int type = 0;
	bool numbers = true;
	std::string nans[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};

	if (lit.size() > 1) {
		for (unsigned long i = 0; i < lit.size(); i++) {
			if (!isdigit(lit[i]) && (lit[i] != '-' || (lit[i] == '-' && i != 0))) {
				numbers = false;
			} if (!isdigit(lit[i]) && lit[i] != 'f' && lit[i] != '.' && lit[i] != '-') {
				for (int j = 0; j < 6; j++) {
					if (lit == nans[j]) {
						type = 5;
						break;
					}
				}
				break;
			} if (lit[i] == '.' && (i == lit.size() - 2 || i == lit.size() - 3) && i > 0) {
				if (type == 1) {
					type = 0; //break?
				} if (type != 2) {
					type = 1;
				}
			} if (lit[i] == 'f') {
				if (type == 2 || i != lit.size() - 1 || lit[i - 2] != '.' || lit.size() < 4) {
					type = 0;
					break;
				}
				type = 2;
			}
		}
	} else {
		if (isdigit(lit[0])) {
			type = 3;
		} else {
			numbers = false;
			type = 4;
		}
	}
	if (numbers) {
		type = 3;
	}
	if ((type == 1 && type == 2 && !numbers)) {
		type = 0;
	}
	std::cout << "0 invalid; 1 double; 2 float; 3 int; 4 char; 5 others\n"
	<< "Num:  \"" << lit << "\"\n"
	<< "Type: " << type << "\n\n";
}

/*check longitud -> si tiene mas de 1 char comprobar si es numero o letra y hacer conversion*/
/*si tiene mas de una letra -> comprobar si tiene f o ., y que no tenga mas de uno*/
/*check si hay mas de una letra -> check si es nan/nanf/etc -> si no encaja es un input invalido*/

//chars acting like ints

//casos que fallan:
//	f1
//	.1 | 1.
//	-1
//	1.f
//	1
//	10