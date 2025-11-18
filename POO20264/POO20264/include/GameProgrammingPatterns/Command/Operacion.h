#pragma once
//este es commando ok?
class
Operacion {
public: 
	virtual void ejecutar() = 0; 
	virtual void deshacer() = 0; 
	virtual ~Operacion() {}
};