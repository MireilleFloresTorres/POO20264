#pragma once
#include"Prerequisites.h"
#include"ProgrammingPatterns/Composite/Sistema.h"
#include"ProgrammingPatterns/Composite/Carpeta.h"

class SistemaCarpeta : public Sistema {
public:
	SistemaCarpeta() = default;
	~SistemaCarpeta() = default;

	void mostrarInfo() override {
		for (auto child : children) {
			child->mostrarInfo();
		}// childre es vector que contiene puntero
	}// auto child crea una varible llamada child
	//auto es sitema 
	//entonces child llama al metodo mostrar info del objeto apuntado por child ->

	void add(Sistema* componente) {
		children.push_back(componente);
	}

private:
	std::vector<Sistema*> children;
};