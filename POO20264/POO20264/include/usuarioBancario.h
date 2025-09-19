#pragma once
#include "Prerequisites.h"
#include "CuentaBancaria.h"

class UsuarioBancario {
private:
	//en esta ecapsulación con el usuarioBancario la relaciono con la clase cuenta bancaria
	std::string nombreUsuario;
	CuentaBancaria cuenta;
	std::vector<std::string> historialTransacciones;//EL vector almacena las transacciones
	//vector una lista dinamica, que puede crecer o reducirse segun se necesite a diferencia de un array
	int antiguedad;
	double cashback;//lo acumulado por compras
	int uniquePoints;

public:

	// Constructor
	UsuarioBancario(const CuentaBancaria& c, const std::string& nombre)
		: cuenta(c), nombreUsuario(nombre), antiguedad(0), cashback(0.0), uniquePoints(0) {
	}

	UsuarioBancario(const std::string& nombre, const std::string& apellido, double saldoInicial, double cashbackInicial, int puntosUnicos)
		: cuenta(nombre + " " + apellido), nombreUsuario(nombre + " " + apellido), antiguedad(0), cashback(cashbackInicial), uniquePoints(puntosUnicos) {
		cuenta.depositar(saldoInicial); // Inicializa el saldo de la cuenta
	}

	//utilizamos get para obtener la informacion de los atributos privados
	std::string getNombreUsuario() const { return nombreUsuario; }
	double getCashback() const { return cashback; }
	int getAntiguedad() const { return antiguedad; }
	int getUniquePoints() const { return uniquePoints; }

	void consultarSaldo() const {
		cuenta.ConsultarSaldo();
	}

	void registrarTransaccion(const std::string& descripcion) {
		//añadimos una transaccioon al historial
		historialTransacciones.push_back(descripcion);
	}

	void depositar(double cantidad) {
		registrarTransaccion("Depósito de: " + std::to_string(cantidad));
	}

	bool retirar(double cantidad) {
		registrarTransaccion("Retiro de:" + std::to_string(cantidad));
		return true;
	}

	void aplicarInteres(double tasa) {
		cuenta.aplicarInteres(tasa); 
	}


};