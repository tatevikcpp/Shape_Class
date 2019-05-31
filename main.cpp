#include "Shape.h"
#include <iostream>
using namespace std;

int main()
{
	Shape *c = new Circle(10, 3.14);
	cout << "area Circle: " << (c->area()) << endl;
	cout << "periametr Circle: " << (c->perimeter()) << endl;

	Shape *t = new Triangle(1, 2, 3, 4);
	cout << "area Triangle: " << (t->area()) << endl;
	cout << "periametr Triangle: " << (t->perimeter()) << endl;

	Shape *r = new Rectangle(5, 6);
	cout << "area Rectangle: " << (r->area()) << endl;
	cout << "periametr Rectangle: " << (r->perimeter()) << endl;

	system("pause");
}