#include "fraction.h"

#ifndef _POINT_H
#define _POINT_H

class Point {
	public:
		Point(Fraction x=0, Fraction y=0);
		~Point() = default;
		
		Point operator+(Point rhs);
 		Point operator-(Point rhs);
 		Point operator*(Fraction rhs);
 		Fraction operator*(Point rhs);
 		Point operator/(Point rhs);
 		Point operator=(Point rhs);
 		
		Fraction getx() {return x; }
		Fraction gety() {return y; }
		
	public:
		Fraction x, y;
		
};

std::istream &operator>>(std::istream &,Point &);
std::ostream &operator<<(std::ostream &,Point);

#endif
