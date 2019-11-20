#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
	virtual double GetSquare() const = 0;
	virtual double GetPerimeter() const = 0;
	virtual void Print() const = 0;
};

#endif