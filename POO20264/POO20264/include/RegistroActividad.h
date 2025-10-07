#pragma once
#include"MiSingleton.h"
#include "Prerequisites.h"

class RegistroActividad {
private:

	//lista de todos los registros de actividad
	std::vector<std::string> registro;
	// hace que una variable o método pertenezca a la CLASE
	// en lugar de a un objeto específico.
	// Esta variable estática mantiene la única instancia de la clase.
	static RegistroActividad* instance;

	RegistroActividad() {}// Constructor privado no coopia externa
public:
	// Función que devuelve la instancia única de la clase.
	static RegistroActividad* getInstance() {
		if (instance == nullptr) {
			instance = new RegistroActividad();
		}
		return instance;
	}// aquí llamamos sin crear primero un objeto de la clase

	void agregarActividad(const std::string& actividad) {
		registro.push_back(actividad);
		std::cout << "Actividad agregada: " << actividad << std::endl;
	}//push.back agrega una actividad al final del vector
	// es decir, al final del registro

	void mostrarActividades() const {
		//mi for repite desde i hasta el tamaño del registro
		for (size_t i = 0; i < registro.size(); i++) {
			//size me devuelve cuantas activades hay en el registro
			std::cout << (i + 1) << ". " << registro[i] << std::endl;
		}// ya así completo imprimo todas las actividades del registro
	}

};
