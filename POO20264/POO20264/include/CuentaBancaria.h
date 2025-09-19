#pragma once
#include "Prerequisites.h"

/**
* Clase cuentabancaria que ima una cuenta bancaria basica
*/
class CuentaBancaria {
private:
	double saldo;//mantenemos el saldo oculto y solo los metodos de la clase pueden acceder a el

	/**
	* Calcula el interes y lo suuma al saldo de la cuenta
	* utilizamos tasa Interes como parametro para calcular el interes
	* 
	*/
	void CalcularInteres(double tasaInteres) { saldo += saldo * tasaInteres; }//calcula y suma el interes al saldo

public:
	std::string titular;

	CuentaBancaria(std::string nombreTitular, double saldoInicial)
		: titular(nombreTitular), saldo(saldoInicial) {
	}

	CuentaBancaria(std::string nombreTitular) : titular(nombreTitular), saldo(0.0) {}
	CuentaBancaria() : titular("Juanita"), saldo(300.00) {}
	~CuentaBancaria() = default;

	void ConsultarSaldo() const { //para mostrar el saldo
		std::cout << "Titular: " << titular << std::endl;
		std::cout << "Saldo actual: " << saldo << std::endl; 
	}

	void aplicarInteres(double tasa) {
		CalcularInteres(tasa); // Llama al metodo privado
	}

	void depositar(double cantidad) {
		if (cantidad > 0) {//validamos orimeramente que la cantidad sea mayor a 0
			saldo += cantidad;// si es así seposita el dinero
			std::cout << "Depósito realizado: " << cantidad << std::endl;
		}
		else {
			std::cout << "Cantidad inválida para depósito." << std::endl;
		}//si no es mayor a 0 no se deposita y se muestra esste menajse
	}

	bool retirar(double cantidad) {
		if (cantidad > 0 && cantidad <= saldo) {
			saldo -= cantidad;//vemos si la cantidad a retirar es mayor a 0 y menor o igual al saldo
			std::cout << "Retiro realizado: " << cantidad << std::endl;
			return true;// si es así se retira el dinero y se retorna true
		}
		else {
			std::cout << "Fondos insuficientes o cantidad inválida." << std::endl;
			return false;//si no se cumple la condicion no se retira el dinero y se retorna false
		}
	}

protected:
	int numeroCuenta;//matenemos el numero de cuenta oculto y solo las clases derivadas pueden acceder a el
};