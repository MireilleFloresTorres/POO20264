#include "Prerequisites.h"
#include"RegistroActividad.h"

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

	return 0;
}
RegistroActividad* RegistroActividad::instance = nullptr;