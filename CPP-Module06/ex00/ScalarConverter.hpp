#ifndef SCALARCONVERTER_HPP_
# define SCALARCONVERTER_HPP_

# include <iostream>
# include <math.h> //sure?
# include <string>

class ScalarConverter {
	public:
		~ScalarConverter();

		static void convert(const std::string &lit);
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);

		ScalarConverter& operator=(const ScalarConverter &other);
};

#endif