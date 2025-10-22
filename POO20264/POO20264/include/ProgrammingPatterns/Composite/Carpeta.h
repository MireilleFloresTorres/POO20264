#pragma once
#include"Prerequisites.h"
#include"ProgrammingPatterns/Composite/Sistema.h"

class Carpeta : public Sistema {
public:
	void mostrarInfo() override {
		std::cout << "Soy una carpeta" << std::endl;
	}
};