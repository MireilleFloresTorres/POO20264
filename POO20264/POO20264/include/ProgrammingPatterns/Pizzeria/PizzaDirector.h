#pragma once
#include"ProgrammingPatterns/Pizzeria/Pizza.h"
#include"ProgrammingPatterns/Pizzeria/ConstructorPizza.h"

class
	PizzaDirector {
public:
	PizzaDirector(BuilderPizza* constructor) : constructor(constructor) {}
	~PizzaDirector() = default;

	void
		construct() {
		if (constructor) {

			constructor->crearMasa();
			constructor->crearQueso();
			constructor->crearSalsa();

			constructor->crearIngredientes();

		}
	}
private:
	BuilderPizza* constructor;
};