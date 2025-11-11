#pragma once
#include"ProgrammingPatterns/Bridge/Implementacion.h"
#include"Prerequisites.h"

class
	ImplmentacionConcretaB : public Implementacion {
public:
	void operacion() override {
		std::cout << "Operacion en implementacion B" << std::endl;
	}
};