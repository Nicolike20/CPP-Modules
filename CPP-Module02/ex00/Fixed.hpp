#ifndef FIXED_HPP_
# define FIXED_HPP_

# include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &copy);
		//otro constructor con un numero como parametro?
		~Fixed();

		Fixed & operator=(const Fixed &assign);
	private:
};

#endif
