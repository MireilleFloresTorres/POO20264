#include "Prerequisites.h"
#include "ProgrammingPatterns/Decorator/ComponenteConcreto.h"
#include "ProgrammingPatterns/Decorator/DecoratorConcretoA.h"
#include "ProgrammingPatterns/Decorator/DecoratorConcretoB.h"

int main() {

	ComponenteConcreto* objeto = new ComponenteConcreto();
	DecoratorConcretoA* decoradorA = new DecoratorConcretoA(objeto);
	DecoratorConcretoB* decoradorB = new DecoratorConcretoB(decoradorA);

	objeto->operacion();
	decoradorA->operacion();
	decoradorB->operacion();

	delete objeto;
	delete decoradorA;
	delete decoradorB;
	return 0;
}
