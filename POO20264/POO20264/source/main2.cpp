#include "Prerequisites.h"
#include"ProgrammingPatterns/Bridge/Dispositivo.h"
#include"ProgrammingPatterns/Bridge/Tv.h"
#include"ProgrammingPatterns/Bridge/Radio.h"
#include"ProgrammingPatterns/Bridge/ControlRemoto.h"


int main() {
	Tv tv;
	Radio radio; 

	ControlRemoto Tv(&tv);
	ControlRemoto Radio(&radio); 

	Tv.EncenderDisp(); 
	Radio.EncenderDisp(); 


	Tv.ApagarDisp();
	Radio.ApagarDisp();


	return 0;
}
