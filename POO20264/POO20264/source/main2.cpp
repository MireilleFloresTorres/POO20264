#include "Prerequisites.h"
#include "ProgrammingPatterns/Adapter/Adaptador.h"
#include "ProgrammingPatterns/Adapter/InterfazNueva.h"
#include "ProgrammingPatterns/Adapter/InterfazVieja.h"


int main() {

	InterfazVieja* objetoViejo = new InterfazVieja();
	InterfazNueva* objetoNuevo = new Adaptador(objetoViejo);

	objetoNuevo->metodoNuevo; 

	delete objetoViejo;
	delete objetoNuevo;
	return 0;
}
