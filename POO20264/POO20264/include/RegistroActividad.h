#pragma once
#include"MiSingleton.h"
#include "Prerequisites.h"

class RegistroActividad {
private:

	//lista de todos los registros de actividad
	std::vector<std::string> registro;
	// hace que una variable o m�todo pertenezca a la CLASE
	// en lugar de a un objeto espec�fico.
	// Esta variable est�tica mantiene la �nica instancia de la clase.
	static RegistroActividad* instance;

	RegistroActividad() {}// Constructor privado no coopia externa
public:
	// Funci�n que devuelve la instancia �nica de la clase.
	static RegistroActividad* getInstance() {
		if (instance == nullptr) {
			instance = new RegistroActividad();
		}
		return instance;
	}// aqu� llamamos sin crear primero un objeto de la clase

	void agregarActividad(const std::string& actividad) {
		registro.push_back(actividad);
		std::cout << "Actividad agregada: " << actividad << std::endl;
	}//push.back agrega una actividad al final del vector
	// es decir, al final del registro

	void mostrarActividades() const {
		//mi for repite desde i hasta el tama�o del registro
		for (size_t i = 0; i < registro.size(); i++) {
			//size me devuelve cuantas activades hay en el registro
			std::cout << (i + 1) << ". " << registro[i] << std::endl;
		}// ya as� completo imprimo todas las actividades del registro
	}

};
