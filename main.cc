#include <iostream>
#include "point.h"
#include "fraction.h"

using namespace std;

int main() {
   
    std::cout << "Enter the coordinates of p1 (x y): ";
    Point p1;
    std::cin >> p1;

    std::cout << "Enter the coordinates of p2 (x y): ";
    Point p2;
    std::cin >> p2;

    std::cout << "Enter the coordinates of q1 (x y): ";
    Point q1;
    std::cin >> q1;

    std::cout << "Enter the coordinates of q2 (x y): ";
    Point q2;
    std::cin >> q2;

    Point intersection;

    Point r = p2 - p1;
    Point s = q2 - q1;
    Point v = q1 - p1;

    Fraction d = (r * s);

    if (d == Fraction(0)) {
        Fraction cross = (v * s);
        if (cross == Fraction(0)) {
            std::cout << "Segments are collinear." << std::endl;
        } else {
            std::cout << "Segments are parallel." << std::endl;
        }
    } else {
        Fraction t = (v * s) / d;
        Fraction w = (v * r) / d;

        if (t >= Fraction(0) && t <= Fraction(1) && w >= Fraction(0) && w <= Fraction(1)) {
            intersection = p1 + (r * t);
            std::cout << "Segments intersect at " << intersection << "." << std::endl;
        } else {
            std::cout << "Segments not parallel but do not intersect." << std::endl;
        }
    }

    return 0;
}