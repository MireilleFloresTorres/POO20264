#include "Prerequisites.h"
//Crear clase character
/** 
*class item
*Representamos un objeto de nuestro inventario
*/
class
    item {
public:
    /**
     * nombre Nombre del item
     * id Identificador 
     * peso Peso del item
     * nivel Nivel del item
     */
    item(std::string nombre, int id, float peso, int nivel)
        : m_nombre(nombre), m_id(id), m_peso(peso), m_nivel(nivel) {
    }
    void mostrarItem() const; 

    void getInformation() {
        std::cout << "Ingresa nombre de tu item: ";
        std::cin >> m_nombre;

        std::cout << "Ingresa el id del item (no puntos): ";
        std::cin >> m_id;

        std::cout << "Ingresa el eso del item: ";
        std::cin >> m_peso;

        std::cout << "Ingresa el nivel del item (1,2,3...): ";
        std::cin >> m_nivel;
        if (m_nivel > 3) {
            std::cout << "Tu itm es muy poderoso..."<<std::endl;
        }
    }
private://declaramos las varibles dentro de la clase no solo en el constructor
    std::string m_nombre;
    int m_id;
    float m_peso;
    int m_nivel;
};

/**
*Se muestra el item agregado
*/
void item:: mostrarItem () const{
    std::cout << "Nombre: " << m_nombre << std::endl;
    std::cout << "Id: " << m_id << std::endl;
    std::cout << "Peso: " << m_peso << std::endl;
    std::cout << "Nivel: " << m_nivel << std::endl;

}
/**
*Se muestra en consola
*/
  int
      main() {
      //traeigp los void
      item objeto("", 0, 0.0f, 0);

      objeto.getInformation();
      objeto.mostrarItem();
      return 0;
  }