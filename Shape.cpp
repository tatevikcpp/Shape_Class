#include "Shape.h"

Shape::Shape(){}


double Circle::area(){ return pi * r * r; }
double Circle::perimeter() { return 2 * pi * r; }

double Triangle::area() { return 0.5 * a * h; }
double Triangle::perimeter() { return a + b + c; }

double Rectangle::area() { return a * b; }
double Rectangle::perimeter() { return (a + b) * 2; }


	

