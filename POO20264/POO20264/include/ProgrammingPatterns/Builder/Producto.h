#pragma once
#include "Prerequisites.h"

class Producto {

public:
    Producto() = default;
    ~Producto() = default;
public:
    void addPart(const std::string& part) {
        parts.push_back(part);
    }
	//const porque no modifica el objeto
	//push_back agrega un elemento al final del vector
    void show() const {
        std::cout << "Producto partes: ";
        for (const auto& part : parts) {
			//const auto& part: recorre el vector parts
            std::cout << part << " ";
			// muestra cada parte
        }
    }

private: 
	std::vector<std::string> parts;
	//este vector guarda las partes del producto
};