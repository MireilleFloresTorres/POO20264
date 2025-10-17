#pragma once
#include"Prerequisites.h"

class Dibujable {
public:
	virtual ~Dibujable() = default;
	virtual void Dibujar() = 0;
	//mi metodo virtual puro 
};