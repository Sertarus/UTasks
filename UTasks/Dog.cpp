#include "Animal.hpp"
#include <iostream>

using namespace std;

class Dog : public Animal {
public:
	bool IsViviparous() const override {
		return is_viviparous;
	}

	void Print() const override {
		cout << "Dog" << endl;
	}

private:
	static const bool is_viviparous = true;
};