#pragma once
#include "Prerequisites.h"
#include"ProgrammingPatterns/Prototype/Documento.h"
#include"ProgrammingPatterns/Prototype/DocumentoConcreto.h"

class DocumentoImagen : public DocumentoConcreto {
private:
    std::string value;

public:
    DocumentoImagen() = default;
    ~DocumentoImagen() = default;

    // Implementación del método clonar
    DocumentoConcreto* clone() const override {
        DocumentoImagen* copia = new DocumentoImagen();
        copia->configu(value);
        return copia;
    }
    void configu(const std::string& _value) override {
        value = _value;
    }

    void mostrar() const override {
        std::cout << "Este tiene imagen" << std::endl;
        std::cout << value << std::endl;

    }
};