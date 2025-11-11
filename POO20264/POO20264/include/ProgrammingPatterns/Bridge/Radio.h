#pragma once
#pragma once
#include"ProgrammingPatterns/Bridge/Dispositivo.h"
#include"Prerequisites.h"

class
	Radio : public Dispositivo {
public:
	void Encender() override {
		std::cout << "Se enciende" << std::endl;
	}

	void Apagar() override {
		std::cout << "Se apaga" << std::endl;
	}
};