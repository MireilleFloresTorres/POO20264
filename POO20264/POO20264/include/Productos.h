#pragma once
#include "Prerequisites.h"
#include "Banco.h"
/**
* Inicializo la clase Productos
*/
class Productos {
private: /**
	*en el private pongo los atribustos de mi clase Productos
	* solo se puede acceder a ellas o modificarlas desde dentro de mi propia clase
	* 
	*/
	std::string nombre;
	std::string descripcion;
	Categoria categoria;
	TipoProducto consumible;
	Marca marca;
	int codigo;
	double peso;
	double costo;

public:
	/**
	* Inicializo un constructor para la clase Productos con sus atributos
	* comportamientos y acciones que puede realizar la clase Productos
	* getters para obetener los atributos de la clase Productos
	* setters para modificar los atributos de la clase Productos
	*/
	Productos(std::string nombre, std::string descripcion, Categoria categoria,
		TipoProducto consumible, Marca marca, int codigo, double peso, double costo) :
		nombre(nombre), descripcion(descripcion), categoria(categoria),
		consumible(consumible), marca(marca), codigo(codigo), peso(peso), costo(costo) {//lista de inicialización
	}
	//Destructor de la clase Productos
	//Elimina los objetos de la clase Productos cuando ya no son necesarios
	//{}significa que no realiza ninguna limpieza específica, pero su presencia es necesaria porque ya lo declaré
	~Productos() {}

	//Getters y Setters de los atributos de la clase Productos
	std::string getNombre() const { return nombre; }
	std::string getDescripcion() const { return descripcion; }
	Categoria getCategoria() const { return categoria; }
	TipoProducto getConsumible() const { return consumible; }
	Marca getMarca() const { return marca; }
	int getCodigo() const { return codigo; }
	double getPeso() const { return peso; }
	double getCosto() const { return costo; }

	void setNombre(const std::string& nuevoNombre) { nombre = nuevoNombre; }
	void setDescripcion(const std::string& nuevaDescripcion) { descripcion = nuevaDescripcion; }
	void setCategoria(Categoria nuevaCategoria) { categoria = nuevaCategoria; }

	void setConsumible(TipoProducto nuevoConsumible) { consumible = nuevoConsumible; }

	void setMarca(Marca nuevaMarca) { marca = nuevaMarca; }

	void setCodigo(int nuevoCodigo) { codigo = nuevoCodigo; }
	void setPeso(double nuevoPeso) { peso = nuevoPeso; }
	void setCosto(double nuevoCosto) { costo = nuevoCosto; }
};

/**
* Al no operar sobre los atributos de la clase Productos, puede ser una función externa
* SInedo global, puede ser utilizada en cualquier parte del programa
*/

std::string CategoriaToString(Categoria categoria) {
	switch (categoria) {
	case Categoria::Electronicos: return "Electronicos";
	case Categoria::Alimentos: return "Alimentos";
	case Categoria::Ropa: return "Ropa";
	case Categoria::Hogar: return "Hogar";
	default: return "Desconocido";
	}
}

std::string TipoProductoToString(TipoProducto tipo) {
	switch (tipo) {
	case TipoProducto::CONSUMIBLE: return "Consumible";
	case TipoProducto::NO_CONSUMIBLE: return "No Consumible";
	default: return "Desconocido";
	}
}

std::string MarcaToString(Marca marca) {
	switch (marca) {
	case Marca::Samsung: return "Samsung";
	case Marca::Nike: return "Nike";
	case Marca::Adidas: return "Adidas";
	case Marca::Nestle: return "Nestle";
	default: return "Desconocido";
	}
}