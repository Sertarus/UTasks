#include "Circle.cpp"
#include "Rectangle.cpp"
#include "Triangle.cpp"
#include "Dog.cpp"
#include "Platypus.cpp"
#include <iostream>

using namespace std;

int main() {
	Circle test1 = Circle(2.0);
	Rectangle test2 = Rectangle(2.0, 3.0);
	Triangle test3 = Triangle(1.0, 1.0, 1.0);
	Dog test4 = Dog();
	Platypus test5 = Platypus();

	cout << test1.GetPerimeter() << endl;
	cout << test1.GetSquare() << endl;
	test1.Print();

	cout << test2.GetPerimeter() << endl;
	cout << test2.GetSquare() << endl;
	test2.Print();

	cout << test3.GetPerimeter() << endl;
	cout << test3.GetSquare() << endl;
	test3.Print();

	cout << test4.IsViviparous() << endl;
	test4.Print();

	cout << test5.IsViviparous() << endl;
	test5.Print();
}