#pragma once
#include"ProgrammingPatterns/Bridge/Implementacion.h"
#include"Prerequisites.h"

class
	ImplmentacionConcretaA : public Implementacion {
public: 
	void operacion() override {
		std::cout << "Operacion en implementacion A" << std::endl; 
	}
};