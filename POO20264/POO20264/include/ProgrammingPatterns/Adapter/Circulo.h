#pragma once
#include"Prerequisites.h"

class
	Circulo {
public:
	Circulo() = default;
	~Circulo() = default;

	virtual void
		DibujarCirculo() {
		std::cout << " Se dibuja un circulo " << std::endl;
	}
};