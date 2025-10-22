#pragma once
#include"Prerequisites.h"
#include"ProgrammingPatterns/Decorator/Cafeteria.h"
#include"ProgrammingPatterns/Decorator/CafeteriaConcreta.h"

class
	Condimento : public Cafeteria {
public: 
	Condimento(Cafeteria* _decorar) : decorar(_decorar) {}
	~Condimento() = default; 

	void 
		PrepararCafe() override {
		decorar->PrepararCafe();
	}
private: 
	Cafeteria* decorar; 
};