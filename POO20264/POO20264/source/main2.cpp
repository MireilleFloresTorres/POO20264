#include "Prerequisites.h"
#include"ProgrammingPatterns/Prototype/Documento.h"
#include"ProgrammingPatterns/Prototype/DocumentoConcreto.h"
#include"ProgrammingPatterns/Prototype/DocumentoImagen.h"
#include"ProgrammingPatterns/Prototype/DocumentoTexto.h"

int main() {

    // Crear prototipos
    DocumentoTexto* texto1 = new DocumentoTexto();
    texto1->configu("Documento original de texto");

    DocumentoImagen* imagen1 = new DocumentoImagen();
    imagen1->configu("foto.jpg");

    std::cout << "original" << std::endl;
    texto1->mostrar();
    imagen1->mostrar();

    DocumentoConcreto* texto2 = texto1->clone();
    DocumentoConcreto* imagen2 = imagen1->clone();
    
    std::cout << "clonel" << std::endl;
    texto2->mostrar();
    imagen2->mostrar();

	return 0;
}
