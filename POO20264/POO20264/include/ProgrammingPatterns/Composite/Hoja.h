#pragma once
#include"Prerequisites.h"
#include"ProgrammingPatterns/Decorator/Componente.h"

class
	Hoja : public Componente {
public:
	Hoja() = default;
	~Hoja() = default;

	void
		operacion() override {
		//implementacio�n especifiaca de la hoja
		std::cout << "Operacion realizada en la hoja" << std::endl;
	}
};