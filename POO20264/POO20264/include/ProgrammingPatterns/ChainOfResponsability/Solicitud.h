#pragma once
#include"Prerequisites.h"

class
Solicitud {
public: 
	Solicitud(Solicitud* _siguiente, int _monto) : siguiente(_siguiente), monto(_monto){}
	~Solicitud() = default; 

	virtual void getMonto(int peticion) {
		if (siguiente) {
			siguiente->getMonto(peticion); 
		}
	}
private: 
	int monto; 
	Solicitud* siguiente; 
};