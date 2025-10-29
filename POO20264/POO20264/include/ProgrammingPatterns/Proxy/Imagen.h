#pragma once
#include "Prerequisites.h"

class
Imagen {
public: 
	Imagen () = default; 
	virtual ~Imagen () = default; //hacemos el constructor virtual

	virtual void
	mostrar() {
		std::cout << "Mostrando Imagen" << std::endl;
	}
};