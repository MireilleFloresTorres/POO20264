#pragma once
#include"Prerequisites.h"
#include"GameProgrammingPatterns/Flyweight/Flyweight.h"

class
	ConcreteFlyweight : public Flyweight {
public: 
	ConcreteFlyweight( char _symbol) : symbol(_symbol) {}
	~ConcreteFlyweight() = default; 

	void 
	draw(int x, int y) override {
		std::cout << "Drawing symbol " << symbol << " at position ("
			<< x << ", " << y << " )\n"; 
	}

private: 
	char symbol; 
};