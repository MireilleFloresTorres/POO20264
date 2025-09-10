#include "Prerequisites.h"
#include "Inventory.h"
#include "Circulo.h"


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


	  Circulo micirculo(5);
      std::cout << "El area del circulo es: " << micirculo.area() << std::endl;
      std::cout << "El perimetro del circulo es: " << micirculo.perimetro() << std::endl;

      Fecha fecha;
      fecha.getFecha();
	  fecha.toString();
	  std::cout << fecha.toString() << std::endl;
 
      return 0;
  }