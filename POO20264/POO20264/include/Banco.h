#include"Prerequisites.h"
#include"usuarioBancario.h"
#pragma once
class Banco {

public:
	Banco() = default;
	~Banco() = default;

	void compra(double monto, UsuarioBancario& cuenta);
   
};
