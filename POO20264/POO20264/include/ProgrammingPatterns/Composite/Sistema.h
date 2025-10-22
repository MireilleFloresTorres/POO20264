#pragma once
#include"Prerequisites.h"
//metodo abstracto
class
	Sistema {
public: 
	virtual ~Sistema() = default;
	virtual void mostrarInfo() = 0; 
};