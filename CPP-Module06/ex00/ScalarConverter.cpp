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
			if (!isdigit(lit[i]) && (lit[i] != '-' || (lit[i] == '-' && i != 0))) {
                //std::cout << "ENTRA EN PRIMER IF\n"; //quitar
				numbers = false;
			} if (!isdigit(lit[i]) && lit[i] != 'f' && lit[i] != '.' && lit[i] != '-') {
                //std::cout << "ENTRA EN SEGUNDO IF\n"; //quitar
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
                //std::cout << "ENTRA EN TERCER IF\n"; //quitar
				if ((!(i == lit.size() - 2 || i == lit.size() - 3) || i == 0) || type == 1 || !isdigit(lit[i - 1])) {
                    std::cout << "  IF\n"; //quitar
					type = 0;
				} else if (type != 2) {
                    //std::cout << "  ELSE IF\n"; //quitar
					type = 1;
				}
			} else if (lit[i] == 'f' && type != 5) {
				if (!resFloat) {
					resFloat = 1;
				} else {
					type = 0;
					break;
				}
                //std::cout << "ENTRA EN CUARTO IF\n"; //quitar
                /*std::cout << "\n\ntests:\ntype:" << type
                << (i != lit.size() - 1 ? "\ntrue" : "\nfalse")
                << (lit[i - 2] != '.' ? "\ntrue" : "\nfalse")
                << "\nlit.size()=" << lit.size()
                << (!isdigit(lit[i - 3]) ? "\ntrue" : "\nfalse")
                << "\ni = " << i
                << "\n i - 2 = " << lit[i - 2]
                << "\n i - 3 = " << lit[i - 3] << "\n\n";*/
				if (type == 2 || i != lit.size() - 1 || lit[i - 2] != '.' || lit.size() < 4 || !isdigit(lit[i - 3])) {
                    //std::cout << "  IF\n"; //quitar
					type = 0;
				} else {
                    //std::cout << "  ELSE\n"; //quitar
					type = 2;
				}
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
	} else if (type == 1 && type == 2) {
		type = 0;
	}

	std::cout << "input -> " << lit << " (type " << type << ")\n"; //quitar
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
			std::cout	<< "char:	" << resChar << "\n" //cambiar esto de char tb como los de arriba?
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

/*check longitud -> si tiene mas de 1 char comprobar si es numero o letra y hacer conversion*/
/*si tiene mas de una letra -> comprobar si tiene f o ., y que no tenga mas de uno*/
/*check si hay mas de una letra -> check si es nan/nanf/etc -> si no encaja es un input invalido*/
/*compruebo que si hay un punto esté en su posicion, que si hay una f tambien lo esté, que no haya mas de una f o punto*/
/*que haya mas cosas aparte de un punto y una f, que si hay negativo esté en su sito*/


/*In contrast to the C-style cast, the static cast will allow the compiler to check that the 
pointer and pointee data types are compatible, which allows the programmer to catch this incorrect
 pointer assignment during compilation.*/