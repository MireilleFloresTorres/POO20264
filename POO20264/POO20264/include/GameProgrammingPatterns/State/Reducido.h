#pragma once
#include"Prerequisites.h"
#include"GameProgrammingPatterns/State/VehiculoState.h"

class Reducido : public VehiculoState {
public:
	void acelerar() override;
	void frenar() override;
};