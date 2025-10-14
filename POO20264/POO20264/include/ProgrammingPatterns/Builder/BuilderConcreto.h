#pragma once
#include"ProgrammingPatterns/Builder/Producto.h"
#include"ProgrammingPatterns/Builder/Builder.h"

class
	BuilderConcreto : public Builder {
public:
	BuilderConcreto();// Constructor
	~BuilderConcreto() = default;

	void buildPartA() override;//la implementacion de los metodos virtuales puros
	void buildPartB() override;
	Producto* getProducto() override;
	//producto es un puntero a Producto
	//significa que BuilderConcreto tiene un Producto
private:
	Producto* producto;
	//puntero a Producto
};