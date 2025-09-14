#pragma once
#include "Prerequisites.h"

class CuentaBancaria {
private:
	double saldo;
	void CalcularInteres(double tasaInteres) { saldo += saldo * tasaInteres; }

public:
	std::string titular;

	// Constructor público
	CuentaBancaria(std::string nombreTitular) : titular(nombreTitular), saldo(0.0) {}
	CuentaBancaria() : saldo(0.0) {} // Constructor por defecto para evitar instanciación sin datos
	void ConsultarSaldo() const { std::cout << "Saldo actual: " << saldo << std::endl; }

	void aplicarInteres(double tasa) {
		CalcularInteres(tasa); // Llama al método privado
	}

protected:
	int numeroCuenta;

	// Constructor protegido
	CuentaBancaria(int numeroCuenta) : numeroCuenta(numeroCuenta), saldo(0.0) {}

	void transferir(double monto, CuentaBancaria& cuentaDestino) {
		if (monto > 0 && monto <= saldo) {
			saldo -= monto;
			cuentaDestino.saldo += monto;
			std::cout << "Transferencia de " << monto << " realizada a " << cuentaDestino.titular << std::endl;
		}
		else {
			std::cout << "Fondos insuficientes o monto inválido." << std::endl;
		}
	}
};