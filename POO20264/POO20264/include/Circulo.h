#pragma once
#include "Prerequisites.h"

class Circulo {
	public:
		Circulo(float radio) : m_radio(radio) {}
		~Circulo() = default;

		float area() const {
			return m_PI * pow(m_radio, 2);
		}
		float perimetro() const {
			return 2 * m_PI * m_radio;
		}

private:
	float m_radio;
	float m_PI = 3.1416f;
};
		

