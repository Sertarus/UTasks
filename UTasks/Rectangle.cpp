#include "Shape.hpp"
#include <iostream>

using namespace std;

class Rectangle : public Shape {
public:
	Rectangle(double width, double height) {
		this->width_ = width;
		this->height_ = height;
	}

	double GetWidth() const {
		return this->width_;
	}

	double GetHeight() const {
		return this->height_;
	}

	void SetWidth(double width) {
		this->width_ = width;
	}

	void SetHeight(double height) {
		this->height_ = height;
	}

	double GetSquare() const override {
		return this->width_ * height_;
	}

	double GetPerimeter() const override {
		return 2 * (width_ + height_);
	}

	void Print() const override {
		cout << "Rectangle" << endl;
	}

private:
	double width_;
	double height_;
};