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

//TODO
    //testear esto a full, ver si puedo quitar un par de cosas reduntantes
    //investigar tema de converssion impliccita
    // tipos de casteo (leetelo):https://stackoverflow.com/questions/332030/when-should-static-cast-dynamic-cast-const-cast-and-reinterpret-cast-be-used

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
			if (!isdigit(lit[i]) && (lit[i] != '-' || (lit[i] == '-' && i != 0))) { //aqui basicamente hace una comprobacion de si hay algo aparte de numeros en el input
				numbers = false;
			} if (!isdigit(lit[i]) && lit[i] != 'f' && lit[i] != '.' && lit[i] != '-') {
				for (int j = 0; j < 6; j++) { //comprueba si hay allgun caracter que no sean {f . -}, y si lo hay, comprueba si el input coincide con los nans
					if (lit == nans[j]) {
						type = 5;
						break;
					}
				}
			} else if (lit[i] == '.') {
				if (!resDouble) {
					resDouble = 1.0; //eto por que?
				} else {
					type = 0; //creo que comprueba si hay algun punto, si no lo hay cambia el valor de resdouble a modo de flag, si ya lo hay, cambia el type a 0 por invalido
					break;
				}
                if ((lit.size() - i > 3 || (lit.size() - i == 3 && lit[lit.size() - 1 != 'f']) || i == lit.size() - 1)
                        || type == 1 || !isdigit(lit[i - 1])) { //aqui hace mil comprobaciones para ver si el punto está colocado correctamente en el input
					type = 0;
				} else if (type != 2) { //si no hemos detectado antes que sea float, por ahora ponemos que es doube
					type = 1; //esto es reduntante? si encontramos un punto despues de una f siempre sera invalido
				}
			} else if (lit[i] == 'f' && type != 5) { //si encontramos f y no es de inf o nanf
				if (!resFloat) {
					resFloat = 1; //lo mismo que la "flag" de los double pero con floats
				} else {
					type = 0; //si ya habia una f antes mamin and yupin
					break;
				}
				if (type == 2 || i != lit.size() - 1 || lit[i - 2] != '.' || lit.size() < 4 || !isdigit(lit[i - 3])) {
					type = 0; //aqui comprobamos si la f está en su lugar, si lo está type pasa a ser 2, si no será 0 por invalido
				} else {
					type = 2;
				}
			}
		}
	} else { //si el input solo tiene un character de longitud, o es int o es char
		if (isdigit(lit[0])) {
			type = 3; //si el caracter es un digito tenemos un int
		} else {
			numbers = false;
			type = 4; //si no pues tenemos un char
		}
	}
	if (numbers) { //estos ultimos if y else if hacen falta?
		type = 3;
	} else if (type == 1 && type == 2) { //??????? esto deberia ser un or?
		type = 0; //en teoria nunca deberia entrar aqui
	}

    std::string aux;
	switch (type) { //segun el type hace la conversion pertinente 
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

/*check longitud -> si tiene mas de 1 char comprobar si es numero o letra y hacer conversion*/
/*si tiene mas de una letra -> comprobar si tiene f o ., y que no tenga mas de uno*/
/*check si hay mas de una letra -> check si es nan/nanf/etc -> si no encaja es un input invalido*/
/*compruebo que si hay un punto esté en su posicion, que si hay una f tambien lo esté, que no haya mas de una f o punto*/
/*que haya mas cosas aparte de un punto y una f, que si hay negativo esté en su sito*/


/*In contrast to the C-style cast, the static cast will allow the compiler to check that the 
pointer and pointee data types are compatible, which allows the programmer to catch this incorrect
 pointer assignment during compilation.*/