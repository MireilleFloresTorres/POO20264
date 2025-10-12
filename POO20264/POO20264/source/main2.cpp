#include "Prerequisites.h"
#include "ProgrammingPatterns/AbstractFactory/FabricaConcreta.h"
#include "ProgrammingPatterns/FurnitureFactory/Mueble.h"
#include "ProgrammingPatterns/FurnitureFactory/FactoriaMuebles.h"
#include"ProgrammingPatterns/FurnitureFactory/FactoriaMueblesRusticos.h"

int main() {
	
	FabricaAbstracta* fabrica = new FabricaConcreta();
	ProductoA* productoA = fabrica->crearProductoA();
	ProductoB* productoB = fabrica->crearProductoB();

	productoA->operacionA();
	productoB->operacionB();

	delete fabrica;
	delete productoA;
	delete productoB;

	std::cout << "Silla:" << std::endl;
	Silla silla;
	silla.descripcion();
	silla.color();

	std::cout << "Mesa:" << std::endl;
	Mesa mesa;
	mesa.descripcion();
	mesa.color();

	FactoriaMueblesRusticos fabricaRustica;//creamos la fábrica rústica
	Silla* sillaRustica = fabricaRustica.crearSilla();
	//llamamos a crea silla que esta en la fábrica rústica
	//entonces se ejecuta el método crearSilla
	//que devuelve un puntero a SillaRustica
	sillaRustica->descripcion();
	//sillaRustica es un puntero a SillaRustica pero es de tipo Silla
	// la desccripcion es virtual entonces se ejecuta el override 
	// y no se ejecuta la vesión de la clase base
	sillaRustica->color();

	Mesa* mesaRustica = fabricaRustica.crearMesa();
	mesaRustica->descripcion();
	mesaRustica->color();
	delete sillaRustica;
	delete mesaRustica;
	return 0;
}
