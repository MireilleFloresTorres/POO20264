#pragma once
#include"Prerequisites.h"
#include"ProgrammingPatterns/ChainOfResponsability/Manejador.h"

class
	ManejadorConcretoC : public Manejador {
public:
	ManejadorConcretoC(Manejador* _siguiente, const std::string _name) : Manejador(_siguiente, _name) {}
	~ManejadorConcretoC() = default;

	void solicitud(int peticion) override {
			std::cout << "ManejadorConcretoC manejo la peticion" << peticion << std::endl;
		}
};