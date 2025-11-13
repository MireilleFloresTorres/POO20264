#pragma once
#include"Prerequisites.h"
class
	Manejador {
public: 
	Manejador(Manejador* _siguiente, const std:: string _name) : siguiente(_siguiente), name(_name){}
	~Manejador() = default;
	virtual void solicitud(int peticion) {
		if (siguiente) {
			siguiente->solicitud(peticion);
		}
	}

private:
	std::string name; 
	Manejador* siguiente; 
};