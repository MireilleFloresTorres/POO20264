#pragma once
#include "Prerequisites.h"

class
	Documento {
private:
	std::string value;// declaro arriba para que lea bien 
public:
	Documento() = default;//constructor
	~Documento() = default;//destructor 
	virtual Documento* clone() const = 0;
	//clanamos el documento 
	virtual void config(const std::string _value) {
		value = value; 
	}
	//configuramos el documento 
	virtual void mostrar() const {
		std::cout << "Contenido del documento: " << value << std::endl;
	}//esto es lo que contiene 

	std::string obtenerContenido() const {
		return value;
	}//sacamos el contenidos
};