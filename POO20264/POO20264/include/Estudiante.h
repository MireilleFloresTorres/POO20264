#pragma once

#include "Prerequisites.h"

class Estudiante {
private:
    std::string nombre;
    int edad;

public:
    // Constructor predeterminado
    Estudiante() : nombre(""), edad(0) {}

    // Constructor con parámetros
    Estudiante(const std::string& nombre, int edad) : nombre(nombre), edad(edad) {}

    void setEstudiante(const std::string& nombre, int edad) {
        this->nombre = nombre;
        this->edad = edad;
    }

    void Informacion() const {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;
    }
};