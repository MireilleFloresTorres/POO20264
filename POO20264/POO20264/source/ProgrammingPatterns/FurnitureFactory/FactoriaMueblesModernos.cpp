#include"ProgrammingPatterns/FurnitureFactory/FactoriaMueblesModernos.h"

static void 
FactoriaMueblesModernos1() {

	FactoriaMueblesModernos fabrica;
	Silla* silla = fabrica.crearSilla();
	silla->descripcion();
	silla->color();

	Mesa* mesa = fabrica.crearMesa();
	mesa->descripcion();
	mesa->color();
	delete silla;
	delete mesa;
}