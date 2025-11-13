#pragma once
#include"Prerequisites.h"
#include"ProgrammingPatterns/ChainOfResponsability/Solicitud.h"

class
	ManejadorGerente : public Solicitud {
public:
	ManejadorGerente(Solicitud* _siguiente, int _monto) : Solicitud(_siguiente, _monto) {}
	~ManejadorGerente() = default;

	void getMonto(int peticion) override {
		if (peticion >= 0 && peticion > 5000) {
			std::cout << "SolicitudConcretoA manejo la peticion" << peticion << std::endl;
		}
		else {
			Solicitud::getMonto(peticion);
		}
	}
};