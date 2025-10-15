#include"ProgrammingPatterns/Pizzeria/BuildPizzaVegeteriana.h"

BuildPizzaVegetariana::BuildPizzaVegetariana() {
    pizza = new Pizza();
}

void
BuildPizzaVegetariana::crearMasa() const {
    pizza->setMasa("Gluten free");
}

void
BuildPizzaVegetariana::crearQueso() const {
    pizza->setQueso("Queso vegetariano");
}

void
BuildPizzaVegetariana::crearSalsa() const {
    pizza->setSalsa("Salsa de tomate");
}

void BuildPizzaVegetariana::crearIngredientes() {
    pizza->addIngrediente("jitomtte");
    pizza->addIngrediente("Albahaca");
}

Pizza* BuildPizzaVegetariana::getPizza() {
    return pizza;
}