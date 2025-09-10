#pragma once

#include "Prerequisites.h"

class
    Rectangulo {
public:
    Rectangulo(float ancho, float altura) : m_ancho(ancho), m_altura(altura) {}

    float perimetroRectangulo() const {
        return 2 * (m_ancho + m_altura);
    }

    float areaRectangulo() const {
        return m_ancho * m_altura;
    }

private:
    float m_ancho;
    float m_altura;
};
