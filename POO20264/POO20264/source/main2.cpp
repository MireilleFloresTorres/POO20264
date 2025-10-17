#include "Prerequisites.h"
#include "ProgrammingPatterns/Adapter/Circulo.h"
#include "ProgrammingPatterns/Adapter/Cuadrado.h"
#include "ProgrammingPatterns/Adapter/CirculoAdapter.h"
#include "ProgrammingPatterns/Adapter/CuadradoAdapter.h"
#include "ProgrammingPatterns/Adapter/Dibujable.h"


int main() {

	Circulo* miCirculo = new Circulo();
	Cuadrado* miCuadrado = new Cuadrado();
	std::cout << std::endl;

	Dibujable* circuloAdaptado = new CirculoAdapter(miCirculo);
	Dibujable* cuadradoAdaptado = new CuadradoAdapter(miCuadrado);

	miCirculo->DibujarCirculo();
	miCuadrado->DibujarCuadrado();

	delete circuloAdaptado;
	delete cuadradoAdaptado;
	delete miCirculo;
	delete miCuadrado;

	return 0;
}
