#ifndef FIXED_HPP_
# define FIXED_HPP_

# include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed();

		Fixed& operator=(const Fixed &rhs);
		std::ostream& operator<<(std::ostream& os, const Fixed &rhs); //esto va aqui?

		int toInt(void) const;
		float toFloat(void) const;
		int getRawBits(void) const;
		void setRawBits(const int raw);

	private:
		int _raw;
		static const int frac = 8;

};

#endif
