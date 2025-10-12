#pragma once
#include"./FactoriaMuebles.h"

class SillaModerna : public Silla {
public:
	void //sobre escribe los métodos virtuales puros
		descripcion() const override {
		std::cout << "Soy una silla moderna yeii" << std::endl;
	}
	void 
		color() const override {
		std::cout << "Soy de color verrde" << std::endl;
	}
}; 

class MesaModerna : public Mesa {
public: 	
	void //sobre escribe los métodos virtuales puros
		descripcion() const override {
		std::cout << "Soy una mesa moderna yeii" << std::endl;
	}
	void 
		color() const override {
		std::cout << "Soy de color gris, gris chido" << std::endl;
	}
};

class FactoriaMueblesModernos : public FactoriaMuebles {
	public:
	Silla* crearSilla() override {
		return new SillaModerna();
	}
	Mesa* crearMesa() override {
		return new MesaModerna();
	}
};
