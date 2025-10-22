#include "Prerequisites.h"
#include "ProgrammingPatterns/Composite/Archivo.h"
#include "ProgrammingPatterns/Composite/SistemaArchivo.h"
#include "ProgrammingPatterns/Composite/Carpeta.h"
int main() {

	Archivo* archivo = new Archivo();
	Archivo* _archivo = new Archivo();
	//creamos objetos archivo, creamos 2 son punteros
	//new reserva 

	Carpeta* carpeta1 = new Carpeta(); 
	SistemaArchivo* sistema = new SistemaArchivo(); 
	//lo mismo que archivo pero en carpeta

	sistema->add(archivo);
	sistema->add(_archivo);
	sistema->add(carpeta1);
	//se gregan los componentes al sistema
	sistema->mostrarInfo();

	delete archivo;
	delete _archivo;
	delete carpeta1;
	delete sistema;
	return 0;
}
