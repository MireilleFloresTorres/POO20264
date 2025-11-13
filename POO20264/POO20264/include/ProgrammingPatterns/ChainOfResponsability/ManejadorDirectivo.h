#pragma once
#include"Prerequisites.h"
#include"ProgrammingPatterns/ChainOfResponsability/Solicitud.h"

class
	ManejadorDirectivo: public Solicitud {
public:
	ManejadorDirectivo(Solicitud* _siguiente, int _monto) : Solicitud(_siguiente, _monto) {}
	~ManejadorDirectivo() = default;

	void getMonto(int peticion) override {
		if (peticion >= 0 && peticion > 1000) {
			std::cout << "SolicitudConcretoA manejo la peticion" << peticion << std::endl;
		}
		else {
			Solicitud::getMonto(peticion);
		}
	}
};