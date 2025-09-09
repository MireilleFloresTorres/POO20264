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

int
main() {

    float ancho, altura;

    std::cout << "Ingrese el ancho: " << std::endl;
    std::cin >> ancho;

    std::cout << "Ingrese el alto: " << std::endl;
    std::cin >> altura;

    Rectangulo rec(ancho, altura);

    std::cout << "Area: " << rec.areaRectangulo() << std::endl;
    std::cout << "Perímetro: " << rec.perimetroRectangulo() << std::endl;

    return 0;
}