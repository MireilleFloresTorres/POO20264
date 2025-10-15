#pragma once
#include "ProgrammingPatterns/Pizzeria/pizza.h"

//clase abstracta
class
	BuilderPizza {
public:
	BuilderPizza() = default; 
	virtual ~BuilderPizza() = default;
	//cosntructor / destructor

	virtual void
		crearMasa() const = 0;
	//Método puro que desúes voy a override
	virtual void  
		crearQueso() const = 0;

	virtual void
		crearSalsa() const = 0; 

	virtual void crearIngredientes() = 0;
	virtual Pizza* getPizza() = 0;
};