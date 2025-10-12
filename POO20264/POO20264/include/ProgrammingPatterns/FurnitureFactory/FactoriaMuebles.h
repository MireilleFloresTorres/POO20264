#pragma once
#include"Prerequisites.h"
#include"./Mueble.h"

class FactoriaMuebles {
	public:
		virtual Silla* crearSilla() = 0;
		// se devuelve el puntero a silla
		// el puntero es del onejto tipo silla
		virtual Mesa* crearMesa() = 0;
		// se devuelve el puntero a mesa
		virtual ~FactoriaMuebles() = default;
};