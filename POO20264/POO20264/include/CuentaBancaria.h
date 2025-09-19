#pragma once
#include "Prerequisites.h"

class CuentaBancaria {
private:
	double saldo;

	void CalcularInteres(double tasaInteres) { saldo += saldo * tasaInteres; }

public:
	std::string titular;

	CuentaBancaria(std::string nombreTitular) : titular(nombreTitular), saldo(0.0) {}
	CuentaBancaria() : titular("Juanita"), saldo(300.00) {}
	~CuentaBancaria() = default;

	void ConsultarSaldo() const { 
		std::cout << "Titular: " << titular << std::endl;
		std::cout << "Saldo actual: " << saldo << std::endl; 
	}

	void aplicarInteres(double tasa) {
		CalcularInteres(tasa); // Llama al metodo privado
	}

protected:
	int numeroCuenta;
};