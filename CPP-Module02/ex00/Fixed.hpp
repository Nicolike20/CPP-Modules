#ifndef FIXED_HPP_
# define FIXED_HPP_

# include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed();

		Fixed& operator=(const Fixed &rhs);

		int getRawBits(void) const;
		void setRawBits(const int raw);
	private:
		int _raw;
		static const int frac = 8;

};

#endif
