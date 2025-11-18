#include "Prerequisites.h"
#include"GameProgrammingPatterns/Command/Operacion.h"
#include"GameProgrammingPatterns/Command/Suma.h"
#include"GameProgrammingPatterns/Command/resta.h"
#include"GameProgrammingPatterns/Command/Multiplicacion.h"
#include"GameProgrammingPatterns/Command/Calculadora.h"

int main() {
	int resultado = 0;

	Suma suma(resultado, 5);
	Resta resta(resultado, 3);
	Multiplicacion multiplicacion(resultado, 4);
	// no hay division no supe hacer eso

	Calculadora calculadora;
	calculadora.ejecutarOpera(&suma);
	std::cout << "Resultado despúes de la suma: " << resultado << std::endl;

	calculadora.ejecutarOpera(&resta);
	std::cout << "Resultado despúes de la resta: " << resultado << std::endl;

	calculadora.deshacerOpera();
	std::cout << "Resultado despúes de dehacer la resta: " << resultado<< std:: endl;

	calculadora.rehacerOpera(); 
	std::cout << "Resultado despúes de re hacer la rrs: " << std::endl; 

	calculadora.ejecutarOpera(&multiplicacion); 
	std::cout << "Resultado despúes de la multiplicación: " << resultado << std::endl;
	
	return 0;
}
