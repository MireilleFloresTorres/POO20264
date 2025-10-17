#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Prototype/DocumentoConcreto.h"

class DocumentoTexto : public DocumentoConcreto {
private:
    std::string value;

public:
    DocumentoTexto() = default;
    ~DocumentoTexto() = default;

    // Implementaci�n del m�todo clonar
    DocumentoConcreto* clone() const override {
        DocumentoTexto* copia = new DocumentoTexto();
        copia->configu(value);
        return copia;
    }

    void configu(const std::string& _value) override {
        value = _value;
    }

    void mostrar() const override {
        std::cout << "Aqu� hay texto" << std::endl;
        std::cout << value << std::endl;
    }
};