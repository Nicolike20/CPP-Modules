#ifndef FIXED_HPP_
# define FIXED_HPP_

# include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &rhs);
		Fixed(int i); //good?;
		Fixed(float f) //good?;
		~Fixed();

		Fixed& operator=(const Fixed &rhs);
		std::ostream& operator<<(std::ostream& os, const Fixed &rhs); //good?;

		int toInt(void) const; //good?;
		float toFloat(void) const; //good?;
		int getRawBits(void) const;
		void setRawBits(const int raw);

	private:
		int _raw;
		static const int frac = 8;

};

#endif
