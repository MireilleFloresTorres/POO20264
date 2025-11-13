#pragma once
#include"Prerequisites.h"
#include"ProgrammingPatterns/ChainOfResponsability/Solicitud.h"

class
	ManejadorDirecGeneral : public Solicitud {
public:
	ManejadorDirecGeneral(Solicitud* _siguiente, int _monto) : Solicitud(_siguiente, _monto) {}
	~ManejadorDirecGeneral() = default;

	void getMonto(int peticion) override {
		std::cout << "SolicitudConcretoA manejo la peticion" << peticion << std::endl;
	}
};