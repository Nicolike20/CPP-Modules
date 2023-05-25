#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	public:
		Point();
		Point(const Point &copy);
		Point(const float x, const float y);
		Point& operator=(const Point &rhs);
		~Point();
		Fixed getX() const;
		Fixed getY() const;


		//getters pa x e y?
		//constructor con Fixed points?
	private:
		const Fixed _x;
		const Fixed _y;
};

#endif
