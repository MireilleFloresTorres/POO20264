#pragma once
#include "Prerequisites.h"

class CuentaBancaria {
private:
	double saldo;
	std::string m_propietario;
	int m_numeroCuenta;
	double CalcularInteres(double tasaInteres) { return m_saldo * tasaInteres; }


public:
	std::string titular;

	// Constructores públicos
	CuentaBancaria() = default;
	CuentaBancaria(std::string nombreTitular) : titular(nombreTitular), saldo(0.0) {}

	~CuentaBancaria() = default;

	int getNumeroCuenta() const {
		return m_numeroCuenta;
	}

	double ConsultarSaldo() {
		return saldo;
	}

	void aplicarInteres(double tasa) {
		saldo += CalcularInteres(tasa);
	}

	void  mostrarSaldo() {
		std::cout << "Saldo actual de " << m_propietario << " (Cuenta " << m_numeroCuenta << "): " << m_saldo << std::endl;
	}
protected:
	int numeroCuenta;
}
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