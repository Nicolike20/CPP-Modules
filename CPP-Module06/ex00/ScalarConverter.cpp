#include "ScalarConverter.hpp"
		
ScalarConverter::ScalarConverter() {
	std::cout << "ScalarConverter default constructor called\n";
}
ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
	*this = copy;
	std::cout << "ScalarConverter copy constructor called\n";
}

ScalarConverter::~ScalarConverter() {
	std::cout << "ScalarConverter copy destructor called\n";
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other){
	(void) other;
	return *this;
}

//0 invalid; 1 double; 2 float; 3 int; 4 char; 5 others;
void ScalarConverter::convert(const std::string &lit) {
	int type = 0;
	bool numbers = true;
	char	resChar = '\0';
	int		resInt = 0;
	float	resFloat = 0;
	double	resDouble = 0.0;
	std::string nans[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};

	if (lit.size() > 1) {
		for (unsigned long i = 0; i < lit.size(); i++) {
			if (!isdigit(lit[i]) && (lit[i] != '-' || (lit[i] == '-' && i != 0))) {         //check numbers
				numbers = false;
			} if (!isdigit(lit[i]) && lit[i] != 'f' && lit[i] != '.' && lit[i] != '-') {    //check type 5
				for (int j = 0; j < 6; j++) {
					if (lit == nans[j]) {
						type = 5;
						break;
					}
				}
			} else if (lit[i] == '.') {
				if (!resDouble) {
					resDouble = 1.0;
				} else {
					type = 0;
					break;
				}
                if ((lit.size() - i > 3 || (lit.size() - i == 3 && lit[lit.size() - 1 != 'f']) || i == lit.size() - 1) //check '.'
                        || type == 1 || !isdigit(lit[i - 1])) {
					type = 0;
				} else if (type != 2) {
					type = 1;
				}
			} else if (lit[i] == 'f' && type != 5) {
				if (!resFloat) {
					resFloat = 1;
				} else {
					type = 0;
					break;
				}
				if (type == 2 || i != lit.size() - 1 || lit[i - 2] != '.' || lit.size() < 4 || !isdigit(lit[i - 3])) { //check 'f'
					type = 0;
				} else {
					type = 2;
				}
			}
		}
	} else { //only one char
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

    std::string aux;
	switch (type) {
		case 0:
			std::cout << "Invalid input\n";
			break;
		case 1:
			resDouble = std::atof(lit.c_str());
			resChar = static_cast<char>(resDouble);
			resInt = static_cast<int>(resDouble);
			resFloat = static_cast<float>(resDouble);
            aux = resChar;
			std::cout	<< "char:	" << (resInt >= 32 && resInt <= 126 ? aux : "Non displayable") << "\n"
						<< "int:	" << resInt << "\n"
						<< "float:	" << resFloat << (fmod(resFloat, 1.0) ? "f" : ".0f") << "\n"
						<< "double:	" << resDouble << (fmod(resDouble, 1.0) ? "" : ".0" ) << "\n";
			break;
		case 2:
			resFloat = std::atof(lit.c_str());
			resChar = static_cast<char>(resFloat);
			resInt = static_cast<int>(resFloat);
			resDouble = static_cast<double>(resFloat);
            aux = resChar;
			std::cout	<< "char:	" << (resInt >= 32 && resInt <= 126 ? aux : "Non displayable") << "\n"
						<< "int:	" << resInt << "\n"
						<< "float:	" << resFloat << (fmod(resFloat, 1.0) ? "f" : ".0f") << "\n"
						<< "double:	" << resDouble << (fmod(resDouble, 1.0) ? "" : ".0" ) << "\n";
			break;
		case 3:
			resInt = std::atoi(lit.c_str());
			resChar = static_cast<char>(resInt);
			resFloat = static_cast<float>(resInt);
			resDouble = static_cast<double>(resInt);
            aux = resChar;
			std::cout	<< "char:	" << (resInt >= 32 && resInt <= 126 ? aux : "Non displayable") << "\n"
						<< "int:	" << resInt << "\n"
						<< "float:	" << resFloat << ".0f\n"
						<< "double:	" << resDouble << ".0\n";
			break;
		case 4:
			resChar = lit[0];
			resInt = static_cast<int>(resChar);
			resFloat = static_cast<float>(resChar);
			resDouble = static_cast<double>(resChar);
			std::cout	<< "char:	" << resChar << "\n"
						<< "int:	" << resInt << "\n"
						<< "float:	" << resFloat << ".0f\n"
						<< "double:	" << resDouble << ".0\n";
			break;
		case 5:
			std::cout	<< "char:	impossible\n"
						<< "int:	impossible\n"
						<< "float:	" << lit << ((lit.size() == 4 && lit[0] == 'n') || lit.size() == 5 ? "\n" : "f\n")
						<< "double:	" << ((lit.size() == 4 && lit[0] == 'n') || lit.size() == 5 ? lit.substr(0, lit.size() - 1) : lit) << "\n";
			break;
	}
}