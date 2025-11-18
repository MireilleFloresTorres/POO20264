#pragma once
#include "Prerequisites.h"
#include"GameProgrammingPatterns/Command/Operacion.h"

//hago la inversa de arriba como encender apagar 
class
	Resta : public Operacion {
public:
	Resta(int& res, int val) : resultado(res), valor(val) {}

	void
		deshacer() override {
		resultado -= valor;
	}

	void
		ejecutar() override {
		resultado += valor;
	}

private:
	int& resultado;
	int valor;
};
