#include "Animal.hpp"
#include <iostream>

using namespace std;

class Platypus : public Animal {
public:
	bool IsViviparous() const override {
		return is_viviparous;
	}

	void Print() const override {
		cout << "Platypus" << endl;
	}

private:
	static const bool is_viviparous = false;
};