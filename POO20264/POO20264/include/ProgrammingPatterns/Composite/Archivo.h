#pragma once
#include"Prerequisites.h"
#include"ProgrammingPatterns/Composite/Sistema.h"

class Archivo : public Sistema {
public:
	void mostrarInfo() override {
		std::cout << "Soy una archivo" << std::endl; 
	}
};