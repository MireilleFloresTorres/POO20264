#pragma once
#include"Prerequisites.h"
#include"ProgrammingPatterns/Decorator/Condimento.h"
#include"ProgrammingPatterns/Decorator/CafeteriaConcreta.h"

class
	CondimentoLeche : public Condimento {
public:
	CondimentoLeche(Cafeteria* _decorar) : Condimento(_decorar) {}
	~CondimentoLeche() = default;

	void
		PrepararCafe() override {
		Condimento::PrepararCafe();
		std::cout << " Leche agregada " << std::endl;
	}
};