#pragma once
#pragma once
#include "Prerequisites.h"

// clase base 
class Vehiculo {
public:
	virtual void descripcion() = 0;
	// método puro, obliga a las clases derivadas a implementarlo
	//implementar su propia versión de la descripción
	virtual ~Vehiculo() = default;
	// este me ayuda aliberar memoria correctamente
};
// clase derivada
//hereda vehiculo y sobre escribe el método descripción
class Auto : public Vehiculo {
public:
	void descripcion() override {
		std::cout << "Soy un auto" << std::endl;
	}// EL override sobre escribe el método virtual puro de la clase base
};
// lo mismo que el auto
class bicicleta : public Vehiculo {
public:
	void descripcion() override {
		std::cout << "Soy una bicicleta ;)" << std::endl;
	}
};


// mi clase abstracta
class FactoriaVehiculos {
public:// virtauo accede a la clase vehiculo
	virtual Vehiculo* crearVehiculo() = 0;
	//metodo que devuelve un puntero a vehiculo
	//entonces cada fabrica decide que vehiculo crear
	//vehiculo* devuelve lo que herede de vehiculo
	virtual ~FactoriaVehiculos() = default;
};

//clase concreta que hereda de la clase abstracta
class FabricaAuto : public FactoriaVehiculos {
public:
	Vehiculo* crearVehiculo() override {
		return new Auto();// creamos algo especifico (AUTO)
	} // con el return new auto creamos el objeto
	//y lo devolvemos como puntero a vehiculo
};

class FactoriaBicicleta : public FactoriaVehiculos {
public:
	Vehiculo* crearVehiculo() override {
		return new bicicleta();
	}//lo mismo que el auto pero en bicicleta jajaja
};