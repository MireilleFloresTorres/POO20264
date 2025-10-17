#pragma once
#include "Prerequisites.h"
#include"ProgrammingPatterns/Prototype/Documento.h"

class
	DocumentoConcreto : public Documento {
public:
	virtual ~DocumentoConcreto() = default;
	//hacemos un metodo virtual para clonar 
	virtual DocumentoConcreto* clone() const = 0;
	virtual void configu(const std::string& _value) = 0;
	//esto es para configurar el contenifo
	virtual void mostrar() const = 0;
};