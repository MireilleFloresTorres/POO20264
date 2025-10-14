#include "ProgrammingPatterns/Builder/BuilderConcreto.h"

BuilderConcreto::BuilderConcreto() {
	producto = new Producto();// Crear un nuevo producto
}

void 
BuilderConcreto::buildPartA() {
	producto->addPart("ParteA");
}// agregar parte A al producto

void 
BuilderConcreto::buildPartB() {
	producto->addPart("ParteB");
}// lo mismo que arriba

Producto*
BuilderConcreto::getProducto() {
	if (producto) {
		return producto;
	}
	return nullptr;
}// retornar el producto
