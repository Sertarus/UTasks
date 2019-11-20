#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
public:
	virtual bool IsViviparous() const = 0;
	virtual void Print() const = 0;
};

#endif