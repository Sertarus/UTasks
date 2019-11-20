#include "Shape.hpp"
#include <iostream>
#include <math.h>

using namespace std;

class Triangle : public Shape {
public:
	Triangle(double first_side_length, double second_side_length, double third_side_length) {
		this->first_side_length_ = first_side_length;
		this->second_side_length_ = second_side_length;
		this->third_side_length_ = third_side_length;
	}

	double GetFirstSide() const {
		return this->first_side_length_;
	}

	double GetSecondSide() const {
		return this->second_side_length_;
	}

	double GetThirdSide() const {
		return this->third_side_length_;
	}

	void SetFirstSide(double first_side) {
		this->first_side_length_ = first_side;
	}

	void SetSecondSide(double second_side) {
		this->second_side_length_ = second_side;
	}

	void SetThirdSide(double third_side) {
		this->third_side_length_ = third_side;
	}

	double GetSquare() const override {
		double p = (this->first_side_length_ + this->second_side_length_ + this->third_side_length_) / 2.0;
		return sqrt(p * (p - this->first_side_length_) * (p - this->second_side_length_) * (p - this->third_side_length_));
	}

	double GetPerimeter() const override {
		return this->first_side_length_ + this->second_side_length_ + this->third_side_length_;
	}

	void Print() const override {
		cout << "Triangle" << endl;
	}

private:
	double first_side_length_;
	double second_side_length_;
	double third_side_length_;
};