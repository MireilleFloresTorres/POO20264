#pragma once
#include"Prerequisites.h"

class //clase abstracta mueble
	Mueble {
public:
	virtual void//métodos virtuales puros
		descripcion() const = 0;
	//inicializo en 0 para que sea puro
	virtual void
		color() const = 0;

	virtual
		~Mueble() = default;
// destructor virtual para liberar memoria correctamente
};

//clase concreta silla que hereda de mueble
class Silla : public Mueble {
	public :
		void// sobre escribe los métodos virtuales puros
		descripcion() const override {
		std::cout << "Soy una silla" << std::endl;
	}
		void// sobre escribe los métodos virtuales puros
		color() const override {
		std::cout << "Soy de color rosita" << std::endl;
	}
};

//clase concreta mesa que hereda de mueble
class Mesa : public Mueble {
	public :
		void// sobre escribe los métodos virtuales puros
		descripcion() const override {
		std::cout << "Soy una mesa" << std::endl;
	}
		void// sobre escribe los métodos virtuales puros
		color() const override {
		std::cout << "Soy de color blanco" << std::endl;
	}
};