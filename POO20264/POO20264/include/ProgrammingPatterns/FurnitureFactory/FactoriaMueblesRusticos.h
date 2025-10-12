#pragma once
#include"./FactoriaMuebles.h"

class SillaRustica : public Silla {
	public :
	void //sobre escribe los m�todos virtuales puros
		descripcion() const override {
		std::cout << "Soy una silla r�stica yeii" << std::endl;
	}
	void 
		color() const override {
		std::cout << "Soy de color morado" << std::endl;
	}
};

class MesaRustica : public Mesa {
	public: 	
	void //sobre escribe los m�todos virtuales puros
		descripcion() const override {
		std::cout << "Soy una mesa r�stica yeii" << std::endl;
	}
	void 
		color() const override {
		std::cout << "Soy de color vino" << std::endl;
	}
};

class FactoriaMueblesRusticos : public FactoriaMuebles {
	public:
	Silla* crearSilla() override {
		//se crea un objeto de tipo SillaRustica y se devuelve su puntero
		//un puntero del objeto que
		// apunta a un objeto de tipo SillaRustica 
		return new SillaRustica();
	}
	Mesa* crearMesa() override {
		return new MesaRustica();
	}
};