#pragma once
#include "Prerequisites.h"

class Pizza {
public: 
	Pizza() = default;
	~Pizza() = default; 


	void
		setMasa(const std::string& masita) {
		//parametro que recibe que no vamos a modificar
		//hacemos referencia no copiamos 
		Masa = masita; 
	}

	void 
		setQueso(const std::string& quesito) {
		Queso = quesito; 
	}

	void
		setSalsa(const std::string& salsita) {
		Salsa = salsita; 
	}

	void 
		addIngrediente(const std::string& ingrediente) {
		//parametro por referencia constante
		Ingredientes.push_back(ingrediente);
		//ingredinete va aser mi vector que estará privado
		//el push back agrega un elemento al final en este caso el ingrediente
	}

	void show() const {
		std::cout << " Masa " << Masa;
		std::cout << " Salsa " << Salsa;
		std::cout << " Queso " << Queso;
		for (const auto& ingre : Ingredientes) {
			//const auto& part: recorre el vector parts
			std::cout << ingre << " ";
			// muestra cada parte de los ingreidntes que agreguen creo
		}
	}
private:
	std::string Masa;
	std::string Salsa;
	std::string Queso;
	std::vector<std::string> Ingredientes;
};