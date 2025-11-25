#pragma once
#include"Prerequisites.h"
#include"GameProgrammingPatterns/State/VehiculoState.h"
class 
Vehiculo {
public: 
	Vehiculo() ; 
	~Vehiculo() ; 
	void setEstado (VehiculoState* nuevoEstado);
	void acelerar ();
	void frenar ();
private:
	VehiculoState* estadoActual; 
};

Vehiculo::Vehiculo() : estadoActual(new Detenido()) {}