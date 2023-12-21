#ifndef SCALARCONVERTER_HPP_
# define SCALARCONVERTER_HPP_

# include <iostream> //quitar si no se usa
# include <math.h> //sure?
# include <string>

class ScalarConverter {
	public:
		~ScalarConverter(); //y destructor?

		static void convert(const std::string &lit);
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);

		ScalarConverter& operator=(const ScalarConverter &other);
};

#endif