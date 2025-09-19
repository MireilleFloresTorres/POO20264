#include "Prerequisites.h"
#include "Inventory.h"
#include"Rectangulo.h"
#include "Circulo.h"
#include "Estudiante.h"
#include "CuentaBancaria.h"
#include"usuarioBancario.h"


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

	  Rectangulo rect;
	  rect.setAltura(5);
	  rect.setBase(3);
	  std::cout << "El area del rectangulo es: " << rect.area() << std::endl;
	  std::cout << "El perimetro del rectangulo es: " << rect.perimetro() << std::endl;

      Fecha fecha;
      fecha.getFecha();
      std::cout << fecha.toString() << std::endl;

	  Circulo micirculo(5);
      std::cout << "El area del circulo es: " << micirculo.area() << std::endl;
      std::cout << "El perimetro del circulo es: " << micirculo.perimetro() << std::endl;

	  Estudiante estudiantes[5];

      estudiantes[0].setEstudiante("Eduardo", 23);
      estudiantes[1].setEstudiante("Kevin", 20);
      estudiantes[2].setEstudiante("Jose", 21);
      estudiantes[3].setEstudiante("Misael", 22);
      estudiantes[4].setEstudiante("Miguel", 19);

      for (int i = 0; i < 5; i++) {
          estudiantes[i].Informacion();
      }


      CuentaBancaria cuenta("Juan Perez");
      std::cout << cuenta.titular << std::endl;

      std::cout << cuenta.titular << std::endl;

         // Muestra saldo inicial
      cuenta.aplicarInteres(0.05);       // Aplica 5% de interés

      UsuarioBancario usuario_1(CuentaBancaria("Juan Perez"), "Juan Perez");
      usuario_1.consultarSaldo();

          return 0;
  }