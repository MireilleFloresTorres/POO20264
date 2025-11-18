#pragma once
#include "Prerequisites.h"
#include"GameProgrammingPatterns/Command/Operacion.h"

class
	Suma : public Operacion {
public:
	Suma(int& res, int val) : resultado(res), valor(val) {}
	void
		ejecutar() override {
		resultado += valor;
		//sumo 
	}

	void
		deshacer() override {
		resultado -= valor; 
	}

private: 
	int& resultado; 
	// mi receptor el resultado
	// no sé que hago chao 
	int valor; 
};
