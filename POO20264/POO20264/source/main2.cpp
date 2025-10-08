#include "Prerequisites.h"
#include"RegistroActividad.h"
#include "FactoryMethod.h"
#include "Vehiculo.h"

//inicializamos la instancia estatic del singleton
MiSingleton* MiSingleton::  instance = nullptr;

int main() {

	MiSingleton* singleton = MiSingleton::getInstance();
	singleton->setData(42);

	std::cout << "Valor del singleton: " << singleton->getData() << std::endl;

	MiSingleton* singleton2 = MiSingleton::getInstance();
	std::cout << "Valor del singleton2: " << singleton2->getData() << std::endl;

	RegistroActividad* registro1 = RegistroActividad::getInstance();

	registro1->agregarActividad("registro del usuario");
	registro1->agregarActividad("Archivo abierto");

	registro1->mostrarActividades();

	//aquí creamos otra segunda instancia del singleton
	RegistroActividad* registro2 = RegistroActividad::getInstance();
	registro2->agregarActividad("Datos guardados");

	registro2->mostrarActividades();

	Fabrica* fabrica = new FabricaA();//FABRICA -> genera a tesla
	Product* producto = fabrica->createProduct();
	producto->operation();

	delete producto;
	delete fabrica;
	//favrica auto hereda de factoria vehiculos
	//entonces mi puntero de la clase base untara a la clase derivada
	FactoriaVehiculos* fabricaAuto = new FabricaAuto();
	//tenemos el punetero a factooriavehiculos  
	Vehiculo* coche = fabricaAuto->crearVehiculo();
	//creamos un obejta de la fbrica auto 
	//y lo guardamos en un puntero a vehiculo
	coche->descripcion();

	FactoriaVehiculos* fabricaBici = new FactoriaBicicleta();
	Vehiculo* bici = fabricaBici->crearVehiculo();
	bici->descripcion();

	// Liberar memoria
	delete coche;
	delete fabricaAuto;
	delete bici;
	delete fabricaBici;

	return 0;
}
RegistroActividad* RegistroActividad::instance = nullptr;