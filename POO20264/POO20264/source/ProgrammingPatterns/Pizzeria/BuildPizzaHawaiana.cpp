#include"ProgrammingPatterns/Pizzeria/BuildPizzaHawaiana.h"

BuildPizzaHawaiana::BuildPizzaHawaiana() {
    pizza = new Pizza();
}

void 
BuildPizzaHawaiana::crearMasa() const {
    pizza->setMasa("tradicional");
}

void 
BuildPizzaHawaiana::crearQueso() const {
    pizza->setQueso("Queso de vaca");
}

void
BuildPizzaHawaiana::crearSalsa() const {
    pizza->setSalsa("Salsa de tomate");
}

void BuildPizzaHawaiana::crearIngredientes() {
    pizza->addIngrediente("jamon");
    pizza->addIngrediente("piña");
}

Pizza* BuildPizzaHawaiana::getPizza() {
    return pizza;
}
