#pragma once
#include"Prerequisites.h"

class
	Cuadrado {
public:
	Cuadrado() = default;
	~Cuadrado() = default;

	virtual void
		DibujarCuadrado() {
		std::cout << " Se dibuja un cuadraado " << std::endl;
	}
};