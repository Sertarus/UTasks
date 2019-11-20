#define _USE_MATH_DEFINES
#include "Shape.hpp"
#include <math.h>
#include <iostream>

using namespace std;

class Circle : public Shape {
public:
	Circle(double radius) {
		this->radius_ = radius;
	}

	double GetRadius() const {
		return this->radius_;
	}

	void SetRadius(double radius) {
		this->radius_ = radius;
	}

	double GetSquare() const override {
		return radius_ * radius_ * M_PI;
	}

	double GetPerimeter() const override {
		return 2 * M_PI * radius_;
	}

	void Print() const override {
		cout << "Circle" << endl;
	}

private:
	double radius_;
};