#pragma once
#include "ProgrammingPatterns/Pizzeria/Pizza.h"
#include "ProgrammingPatterns/Pizzeria/ConstructorPizza.h"

class
	BuildPizzaHawaiana : public BuilderPizza {
public:
	BuildPizzaHawaiana();// Constructor
	~BuildPizzaHawaiana() = default;

	void crearMasa() const override;
	void crearQueso() const override;
	void crearSalsa() const override;

	void crearIngredientes() override;
	Pizza* getPizza() override;
	//producto es un puntero a Producto
	//significa que BuilderConcreto tiene un Producto
private:
	Pizza* pizza;
	//puntero a Producto
};
