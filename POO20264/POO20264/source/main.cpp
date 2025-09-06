#include "Prerequisites.h"
#include "Inventory.h"
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

      std::cout << "Hello World!" << std::endl;
      std::cin.get();
      return 0;
  }