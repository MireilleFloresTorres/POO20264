#include "Prerequisites.h"
#include"ProgrammingPatterns/Decorator/CafeteriaConcreta.h"
#include"ProgrammingPatterns/Decorator/Leche.h"
#include"ProgrammingPatterns/Decorator/DecoradorAzucar.h"

int main() {

	CafeteriaConcreta* cafe = new CafeteriaConcreta();
	CondimentoLeche* Leche = new CondimentoLeche(cafe); 
	CondimentoAzucar* Azucar = new CondimentoAzucar(Leche);

	cafe->PrepararCafe();
	Azucar->PrepararCafe();
	Leche->PrepararCafe();

	delete cafe;
	delete Leche;
	delete Azucar;
	return 0;
}
