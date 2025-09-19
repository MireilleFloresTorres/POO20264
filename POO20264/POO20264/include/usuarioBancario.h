#pragma once
#include "Prerequisites.h"
#include "CuentaBancaria.h"

class UsuarioBancario {
private:
	//en esta ecapsulación con el usuarioBancario la relaciono con la clase cuenta bancaria
	CuentaBancaria m_cuentaBancaria;//miencbro de clase cuenta bancaria
	std::string m_nombreUsuario;
	std::vector<double> m_historialtransacciones;//uso vector para almacenar el historial de transacciones
	//vectoor para listas de datos
	Fecha m_antiguedadCuenta;//fehca de creacion de la cuenta
	int m_cashback;
	int m_uniquepoints;

public:

	UsuarioBancario(const CuentaBancaria& cuenta, const std::string& nombreUsuario)//el constructor se llama cuando creanos un objeto de la clase usuario bancario
		: m_cuentaBancaria(cuenta), 
		m_nombreUsuario(nombreUsuario) {//recibe nta bancaria y nombre de usuario
		//inicializo los demas atributos
		m_antiguedadCuenta.getFecha();
		m_cashback = 0;
		m_uniquepoints = 5;
	}
	//destructor
	~UsuarioBancario() = default;
	//mis metodos
	CuentaBancaria& getCuenta() {// me devuelve la cuenta bancaria para poder usar sus metodos
		return m_cuentaBancaria;
	}
	void consultarSaldo() const {//llamo desde usuario bancario y este lo llama desde cuenta bancaria
		m_cuentaBancaria.ConsultarSaldo();
	}
	void agregarTransaccion(double monto) {
		m_historialtransacciones.push_back(monto);
	}

};