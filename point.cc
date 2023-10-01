#include "point.h"
#include <iostream>

		Point::Point(Fraction xcoordinate, Fraction ycoordinate)
		{
			x = xcoordinate;
			y = ycoordinate;
		}

		Point Point::operator+(Point rhs)
		{
			Fraction x, y;
			x = x + rhs.x;
			y = y + rhs.y;
			return Point(x, y); 
		}

 		Point Point::operator-(Point rhs)
		{
			Fraction x, y;
			x = x - rhs.x;
			y = y - rhs.y;
			return Point(x, y);
		}

 		Point Point::operator*(Fraction rhs)
		{
			Fraction x, y;
			x = x * rhs;
			y = y * rhs;
			return Point(x, y);
		}

 		Fraction Point::operator*(Point rhs)
		{
			Fraction cross;
			cross = (( x * rhs.y)-(y * rhs.x));
			return cross;
		}

 		Point Point::operator/(Point rhs)
		{
			Fraction x,y;
			x = x / rhs.x;
			y = y / rhs.y;
			return Point(x, y);
		}

 		Point Point::operator=(Point rhs)
		{
			x = rhs.x;
			y = rhs.y;
			return Point(x,y);
		}

		std::istream &operator>>(std::istream &ins, Point &p)
		{
			Fraction xcoordinate, ycoordinate;
			char lpar, comma, rpar;
			ins >> lpar >> xcoordinate >> comma >> ycoordinate >> rpar;
			p = Point(xcoordinate, ycoordinate);
			return ins;
		}

		std::ostream &operator<<(std::ostream& out, Point point)
		{
			out << "(" << point.x << "," << point.y << ")";
			return out;
		}
