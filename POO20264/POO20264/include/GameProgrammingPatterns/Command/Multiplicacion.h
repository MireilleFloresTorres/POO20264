#pragma once
#include "Prerequisites.h"
#include"GameProgrammingPatterns/Command/Operacion.h"
class
	Multiplicacion : public Operacion {
public:
	Multiplicacion(int& res, int val) : resultado(res), valor(val), anterior(0) {}
	//necesito agarrar al que va nates 
	// mmm guardar porque ya no oes la inversa de los otros 
	//ahm okay la multiplicaicón ya no puede ser mi inversa, no voy a sumar sumar osi? 
	//el resultado es la luz porque ahí aplico mis metodos entonces no me espanto si no hay luz creo
	// o no sé chao
	//incializo bien y vacio el anterior osea 0
	void
	ejecutar() override {
		anterior = resultado; 
		resultado *= valor; 
		//sumo 
	}
	//entonces anteriro es resultado que es resultado guarda antes de mmultiplicar
	//entonces intercambio
	void
	deshacer() override {
		resultado = anterior; 
	}

private:
	int& resultado;
	// mi receptor el resultado
	// no sé que hago chao 
	int valor;

	int anterior; 
};