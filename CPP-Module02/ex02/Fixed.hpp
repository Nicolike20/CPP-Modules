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

		bool operator<(const Fixed &rhs) const; //es necesario que sean const?
		bool operator>(const Fixed &rhs) const;
		bool operator<=(const Fixed &rhs) const;
		bool operator>=(const Fixed &rhs) const;
		bool operator==(const Fixed &rhs) const;
		bool operator!=(const Fixed &rhs) const;

		Fixed operator+(const Fixed &rhs) const; //es necesario que sean const?
		Fixed operator-(const Fixed &rhs) const;
		Fixed operator*(const Fixed &rhs) const;
		Fixed operator/(const Fixed &rhs) const;

		Fixed& operator++(); //estas no tienen que ser const? //pre
		Fixed operator++(int);                                //post
		Fixed& operator--();
		Fixed operator--(int);

		static Fixed& min(Fixed &lhs, Fixed &rhs); //estas no tienen que ser const?
		static const Fixed& min(const Fixed &lhs, const Fixed &rhs);
		static Fixed& max(Fixed &lhs, Fixed &rhs);
		static const Fixed& max(const Fixed &lhs, const Fixed &rhs);

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
