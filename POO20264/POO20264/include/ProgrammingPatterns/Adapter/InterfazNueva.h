#pragma once
#include"Prerequisites.h"

class
	InterfazNueva {
public:
	InterfazNueva() = default;
	//cosntructoe
	~InterfazNueva() = default;// destructot

	//metodo virtual
	virtual void
		metodoNuevo() {
		std::cout << "metodo de la interfaz neuva" << std::endl;
	}
};