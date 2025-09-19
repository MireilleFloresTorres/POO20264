#include"Prerequisites.h"
#include"usuarioBancario.h"
#pragma once
class Banco {

public:
	Banco() = default;
	~Banco() = default;

	void compra(UsuarioBancario& usuario, double monto, const std::string& descripcion) {
		usuario.retirar(monto);// retiramos el dinero de la cuenta del usuario
	
		usuario.registrarTransaccion("Compra realizada: " + descripcion + " por: " + std::to_string(monto));
	}// resgistramos la transaccion en el historial del usuario

	void transferencia(UsuarioBancario& origen, UsuarioBancario& destino, double monto) {
		if (monto <= 0) {//nos aguramos que el monto sea mayor a o peso
			origen.registrarTransaccion("Intento de transferencia inválida de :" + std::to_string(monto));// sii no es válido registra error
			
		}

		double saldoInicial = origen.getCashback();//obtenemos el saldo dl usuario inical,
		origen.retirar(monto);// retiramos el dinero de la cuenta del usuario origen

		destino.depositar(monto);// y depositamos el dinero en la cuenta del usuario destin
		origen.registrarTransaccion("Transferencia de:  " + std::to_string(monto) + " a " + destino.getNombreUsuario());
		//combinamos con + para convertir el monto a string y registramos la transaccion en el historial de amnbas partes
		destino.registrarTransaccion("Transferencia recibida de: " + std::to_string(monto) + " de " + origen.getNombreUsuario());// registramos la transaccion en el historial de ambos 
	}
};
