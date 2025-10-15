#include "Prerequisites.h"
#include "ProgrammingPatterns/AbstractFactory/FabricaConcreta.h"
#include "ProgrammingPatterns/FurnitureFactory/Mueble.h"
#include "ProgrammingPatterns/FurnitureFactory/FactoriaMuebles.h"
#include"ProgrammingPatterns/FurnitureFactory/FactoriaMueblesRusticos.h"
#include"ProgrammingPatterns/Builder/Builder.h"
#include"ProgrammingPatterns/Builder/BuilderConcreto.h"
#include"ProgrammingPatterns/Builder/Director.h"
#include"ProgrammingPatterns/Pizzeria/Pizza.h"
#include"ProgrammingPatterns/Pizzeria/ConstructorPizza.h"
#include"ProgrammingPatterns/Pizzeria/BuildPizzaHawaiana.h"
#include"ProgrammingPatterns/Pizzeria/BuildPizzaVegeteriana.h"
#include"ProgrammingPatterns/Pizzeria/PizzaDirector.h"


int main() {
	Builder* builder = new BuilderConcreto();
	Director* director = new Director(builder);
	director->construct();
	Producto* producto = builder->getProducto();
	producto->show();

	delete producto;
	delete director;
	delete builder;

	BuilderPizza* constructorPizza = new BuildPizzaHawaiana();
	PizzaDirector* directorHawaiana  = new PizzaDirector (constructorPizza);
	directorHawaina -> construct();
	Pizza* pizza = ConstructorPizza ->getPizza();
	pizza->show();


	return 0;
}
