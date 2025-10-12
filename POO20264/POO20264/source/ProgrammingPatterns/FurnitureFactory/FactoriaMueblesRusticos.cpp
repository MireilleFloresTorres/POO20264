#include"ProgrammingPatterns/FurnitureFactory/FactoriaMueblesRusticos.h"

static void
FactoriaMueblesRusticos1() {

	FactoriaMueblesRusticos fabrica;
	//creamos un objeto local de la fábrica rústica
	Silla* silla = fabrica.crearSilla();
	//fabrica es un objeto por eso usamos .
	//silla contiene la dirección de memoria del objeto SillaRustica
	//la flecha indica ir a la dirección de memoriay llamar al método
	//*silla accede al objeto
	//.accede al miembro
	silla->descripcion();
	//silla es de tipo Silla pero apunta a un objeto de tipo SillaRustica
	silla->color();
	Mesa* mesa = fabrica.crearMesa();
	mesa->descripcion();
	mesa->color();
	delete silla;
	delete mesa;
}