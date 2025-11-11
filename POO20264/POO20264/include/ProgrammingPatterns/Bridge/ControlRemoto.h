#pragma once
#include"ProgrammingPatterns/Bridge/Dispositivo.h"
#include"Prerequisites.h"

class
	ControlRemoto {
public: 
	ControlRemoto(Dispositivo* disp) : dispositivo(disp) {}
	void EncenderDisp() {
		dispositivo->Encender();
		//llamo al metodo encender del dispositivo que se paunte
		//dandole la ccion al objeto concreto ya sea tv o rdio
	}

	void ApagarDisp() {
		dispositivo->Apagar();
		//siempre es llamada con () todo tonoto y0 
	}

private: 
	Dispositivo* dispositivo;
};