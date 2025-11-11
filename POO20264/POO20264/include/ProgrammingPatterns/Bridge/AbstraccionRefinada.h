#pragma once
#include"ProgrammingPatterns/Bridge/Implementacion.h"
#include"ProgrammingPatterns/Bridge/Abstraccion.h"
#include"Prerequisites.h"

class
	AbstraccionRefinada : public Abstraccion {
public:
	AbstraccionRefinada(Implementacion* imp) : Abstraccion(imp) {}

	void operacion() override {
		implementacion->operacion();
	}

};