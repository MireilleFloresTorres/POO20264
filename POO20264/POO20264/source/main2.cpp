#include "Prerequisites.h"
#include"ProgrammingPatterns/ChainOfResponsability/Solicitud.h"
#include"ProgrammingPatterns/ChainOfResponsability/ManejadorDirectivo.h"
#include"ProgrammingPatterns/ChainOfResponsability/ManejadorDirecGeneral.h"
#include"ProgrammingPatterns/ChainOfResponsability/ManejadorGerente.h"

int main() {
	
	ManejadorDirecGeneral direcGeneral(nullptr); 
	ManejadorGerente gerente(&direcGeneral); 
	ManejadorDirectivo directivo(&gerente);
	return 0;
}
