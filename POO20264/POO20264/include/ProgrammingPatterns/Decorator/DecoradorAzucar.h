#pragma once
#include"Prerequisites.h"
#include"ProgrammingPatterns/Decorator/Condimento.h"
#include"ProgrammingPatterns/Decorator/CafeteriaConcreta.h"

class
	CondimentoAzucar : public Condimento {
public:
	CondimentoAzucar(Cafeteria* _decorar) : Condimento(_decorar) {}
	~CondimentoAzucar() = default;

	void
		PrepararCafe() override {
		Condimento::PrepararCafe();
		std::cout << " Azucar agregada " << std::endl;
	}
};