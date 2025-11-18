#pragma once
#include "Prerequisites.h"
#include"GameProgrammingPatterns/Command/Operacion.h"

class
Calculadora {
	//este es el control remot
	//agarro la opercaion se ejecuta y se guarda entnces hace y deshace
public: 
	Calculadora() : operacion(nullptr) {}
	//vacio vacio 

	void
	ejecutarOpera(Operacion* op) {
		//un puntero a cualquier operacion aaaaaa ya por favor
		operacion = op; //guardo la operacion
		operacion->ejecutar(); //ejecuto

	}
	
	void 
	deshacerOpera() {
		if (operacion != nullptr) {//si hay o no hay
			operacion->deshacer(); // y la operacion se deshace yeeii
	}
	}

	//lo switcheo otra vez/combino
	void 
	rehacerOpera() {
		if (operacion != nullptr) {
			operacion->ejecutar();
		}
	}
private: 
	Operacion* operacion; //declaro
};