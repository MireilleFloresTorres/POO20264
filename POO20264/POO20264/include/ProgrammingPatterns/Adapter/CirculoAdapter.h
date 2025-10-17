#pragma once
#include"Prerequisites.h"
#include "ProgrammingPatterns/Adapter/Circulo.h"
#include "ProgrammingPatterns/Adapter/Dibujable.h"

class CirculoAdapter : public Dibujable {
//hereda mi interfaz dibujable o se que a fuerza tiene 
// que implemntar su método en este caso dibujar
public: 
	CirculoAdapter(Circulo* _circuloViejo) : circulo(_circuloViejo) {}
	//el adaptador recibe un puntero a circulo
	// y circuloviejo lo guarda
	~CirculoAdapter() = default;

	void
		Dibujar() override {
		//aqui esta el metodo dibujar
		// y se sobreescribe
		std::cout << "Adaptando metodo nuevo a metodo viejo" << std::endl;
		circulo->DibujarCirculo();
	}
private: 
	Circulo* circulo;
	//referancia a circulo loque vamos a adaptar
};