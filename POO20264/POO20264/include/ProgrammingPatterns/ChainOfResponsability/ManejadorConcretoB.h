#pragma once
#include"Prerequisites.h"
#include"ProgrammingPatterns/ChainOfResponsability/Manejador.h"

class
	ManejadorConcretoB : public Manejador {
public:
	ManejadorConcretoB(Manejador* _siguiente, const std::string _name) : Manejador(_siguiente, _name) {}
	~ManejadorConcretoB() = default;

	void solicitud(int peticion) override {
		if (peticion >= 0 && peticion > 20) {
			std::cout << "ManejadorConcretoB manejo la peticion" << peticion << std::endl;
		}
		else {
			Manejador::solicitud(peticion);
		}
	}
};