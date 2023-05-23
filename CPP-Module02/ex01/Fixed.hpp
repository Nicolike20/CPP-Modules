#ifndef FIXED_HPP_
# define FIXED_HPP_

# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed();

		Fixed& operator=(const Fixed &rhs);

		int toInt(void) const;
		float toFloat(void) const;
		int getRawBits(void) const;
		void setRawBits(const int raw);

	private:
		int _raw;
		static const int frac = 8;

};

std::ostream& operator<<(std::ostream& os, const Fixed &rhs);

#endif
