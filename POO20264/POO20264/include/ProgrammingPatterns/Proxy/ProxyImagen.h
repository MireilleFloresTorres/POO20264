#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Proxy/Imagen.h"

class
ProxyImagen : public Imagen {
public: 
	ProxyImagen() : imagenReal(nullptr) {}
	~ProxyImagen() {
		if (imagenReal != nullptr) {
			//verificamos si se crea una imagen osea un objeto
			//vemos si llamamos mostrar y no hay nada que liberar
			delete imagenReal; 
			//liberamos memoria 
			imagenReal = nullptr; 
			//ponemos el puntero en null para liverar memoria
		}
	}

	void 
	mostrar() override {
		if (imagenReal == nullptr) {
			imagenReal = new Imagen(); 
		}
		imagenReal->mostrar(); 
	}
private: 
	Imagen* imagenReal;
};