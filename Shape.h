#pragma once
class Shape
{
public:
	Shape();
	~Shape() {};
	virtual double area() = 0;
	virtual double perimeter() = 0;

};

class Circle : public Shape
{
public:
	Circle(double radius, double pi) : r(radius), pi(pi){}
	~Circle() {};
	double area();//{ return pi * r * r; }
	double perimeter();//{ return 2 * pi * r; }
private:
	double r;
	double pi;
};

class Triangle : public Shape
{
public:

	Triangle(double a_, double b_, double c_, double h_) : a(a_), b(b_), c(c_), h(h_) {}
	~Triangle() {}
	double area();// return 0.5 * a * h; }
	double perimeter();// return a + b + c; }
private:
	double a, b, c, h;

};

class Rectangle : public Shape
{
public:
	Rectangle(double a_, double b_) : a(a_), b(b_) {}
	~Rectangle() {}
	double area();// { return a * b; }
	double perimeter();// { return (a + b) * 2; }
private:
	double a, b;
};
