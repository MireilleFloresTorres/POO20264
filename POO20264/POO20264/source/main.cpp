#include "Prerequisites.h"
#include "Inventory.h"
#include"Rectangulo.h"
#include "Circulo.h"
#include "Estudiante.h"
#include "UsuarioBancario.h"
#include "Banco.h"
#include "Productos.h"


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

      Banco Santander;
      UsuarioBancario Ariana = Santander.nuevoUsuario(CuentaBancaria("Ariana", 0001, 5000.0));
      UsuarioBancario Ana = Santander.nuevoUsuario(CuentaBancaria("Ana", 0002, 3000.0));


      std::cout << "Antes de la transferencia:" << std::endl;


      std::cout << "Realizando la transferencia:" << std::endl;
      Santander.realizarTransferencia(Ana, Ariana, 1500.0, 1709);
      Santander.realizarCompra(Ariana, "Shampoo", 245.0, 1809); // Esto debe de dar cashBack (Compras en comercios = 1%)

      std::cout << "Despues de la transferencia:" << std::endl;

	  Productos galletas("Galletas de Chocolate", "Galletas rellenas de crema de vainilla",// creamos un objeto de la clase Productos
		  Categoria::Alimentos, TipoProducto::CONSUMIBLE, Marca::Nestle,// le dmaos argumentos al constructor para inicializar sus atributos
          105, 0.4, 70.50);

	  std::cout << "Nombre: " << galletas.getNombre() << std::endl;// accedemos a los atributos mediante los metodos get
	  std::cout << "Marca: " << MarcaToString(galletas.getMarca()) << std::endl;// usamos las funciones globales para convertir los enum a string
      std::cout << "Costo: " << galletas.getCosto() << std::endl;
      std::cout << "Categoria: " << CategoriaToString(galletas.getCategoria()) << std::endl;
      std::cout << "Tipo DE PRODUCTO: " << TipoProductoToString(galletas.getConsumible()) << std::endl;

	  galletas.setCosto(50.00);// modificamos el costo mediante el metodo set
	  std::cout << "Nombre: " << galletas.getNombre() << std::endl;// accedemos a los atributos mediante los metodos get y moitramos el costo modificado
      std::cout << "Marca: " << MarcaToString(galletas.getMarca()) << std::endl;
      std::cout << "Nuevo Costo: $" << galletas.getCosto() << std::endl;

      std::cin.get();
      return 0;
  }

