#pragma once
#include"Prerequisites.h"
#include"GameProgrammingPatterns/State/VehiculoState.h"

class Normal : public VehiculoState {
public:
	void acelerar() override;
	void frenar() override;
};