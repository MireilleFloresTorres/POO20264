#include "Prerequisites.h"
#include "Inventory.h"
#include "Rectangulo.h"

class
    item{ };


  int
      main() {
      Inventory inventory;
      inventory.addItem("Pocion de vida", 5);
      inventory.addItem("Elixir de mana", 3);
      inventory.addItem("Diamante", 64);

      inventory.useItem("Pocion de vida", 2);
      inventory.showInventory();

      float ancho, altura;

      std::cout << "Ingrese el ancho: " << std::endl;
      std::cin >> ancho;

      std::cout << "Ingrese el alto: " << std::endl;
      std::cin >> altura;

      Rectangulo rec(ancho, altura);

      std::cout << "Area: " << rec.areaRectangulo() << std::endl;
      std::cout << "Perímetro: " << rec.perimetroRectangulo() << std::endl;

      Fecha fecha;
      fecha.getFecha();
      std::cin.get();
 
      return 0;
  }