#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Prototype/DocumentoConcreto.h"

class DocumentoTexto : public DocumentoConcreto {
private:
    std::string value;

public:
    DocumentoTexto() = default;
    ~DocumentoTexto() = default;

    // Implementación del método clonar
    DocumentoConcreto* clone() const override {
        DocumentoTexto* copia = new DocumentoTexto();
        copia->configu(value);
        return copia;
    }

    void configu(const std::string& _value) override {
        value = _value;
    }

    void mostrar() const override {
        std::cout << "Aquí hay texto" << std::endl;
        std::cout << value << std::endl;
    }
};