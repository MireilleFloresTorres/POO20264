#pragma once
#include "Prerequisites.h"
#include "CuentaBancaria.h"

class UsuarioBancario {
public: 
	UsuarioBancario(CuentaBancaria cuenta) : m_cuenta(cuenta) {}
	m_nombreUsuario = m_cuenta.getPropietario();
	m_cashBack = 0;
	m_uniquePoints = 0; 
	~UsuarioBancario() {}

	CuentaBancaria getCuenta() { 
		return m_cuenta; }

private:
	CuentaBancaria m_cuenta;
	std::string m_nombreUsuario;
	int m_cashBack;
	int m_uniquePoints;
	std::vector<int> m_historialTransacciones;
};

