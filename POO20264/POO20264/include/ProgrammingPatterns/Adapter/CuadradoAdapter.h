#pragma once
#include "ProgrammingPatterns/Adapter/Cuadrado.h"
#include "ProgrammingPatterns/Adapter/Dibujable.h"

class CuadradoAdapter : public Dibujable {
	//hereda mi interfaz dibujable o se que a fuerza tiene 
	// que implemntar su método en este caso dibujar
public:
	CuadradoAdapter(Cuadrado* _cuadradoViejo) : cuadrado(_cuadradoViejo) {}
	//el adaptador recibe un puntero a circulo
	// y circuloviejo lo guarda
	~CuadradoAdapter() = default;

	void
		Dibujar() override {
		//aqui esta el metodo dibujar
		// y se sobreescribe
		std::cout << "Adaptando metodo nuevo a metodo viejo" << std::endl;
		cuadrado->DibujarCuadrado();
	}
private:
	Cuadrado* cuadrado;
	//referancia a circulo loque vamos a adaptar
};