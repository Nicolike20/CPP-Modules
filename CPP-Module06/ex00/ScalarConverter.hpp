#ifndef SCALARCONVERTER_HPP_
# define SCALARCONVERTER_HPP_

class ScalarConverter {
	public:
		ScalarConverter(); //constructores en privado?
		ScalarConverter(const ScalarConverter &copy);
		~ScalarConverter(); //y destructor?

		ScalarConverter& operator=(const ScalarConverter &other);

		void convert(/*que coño va aqui*/);
	private:
};
