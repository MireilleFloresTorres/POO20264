#include"Prerequisites.h"
#include"usuarioBancario.h"
#pragma once

/**
  class Banco
 ESta lase que gestiona operaciones como compras, transferencias y cálculo de cashback.
 */

class Banco {

public:
	//Este es el constructor
	Banco() = default;
	//Este es el destructor
	~Banco() = default;

	/**
	* Aquí relaizamos una compra , retirando el monto de la cuenta del usuario
	* aquí el usuario referancia a mi clase usuarioBancario 
	* utilizamos el monto para la candiad a retirar y la descripcion para detallar la compra
	* aquí deber´´ia descontar del monto
	*/
	void compra(UsuarioBancario& usuario, double monto, const std::string& descripcion) {
		usuario.retirar(monto);// retiramos el dinero de la cuenta del usuario
	
		usuario.registrarTransaccion("Compra realizada: " + descripcion + " por: " + std::to_string(monto));
	}// resgistramos la transaccion en el historial del usuario


	/**
	* En este método se arealiza una tranfercian, e usuario origen y destino son referenciados a la clase usuarioBancario
	* el monto es la cantidad a transferir entre las dos cuentas
	* si el monto en es menor o igual a 0, se registra un intento de transferencia inválida
	* si es valido , se retira el monto de la cuenta del usuario origen y se deposita en la cuenta del usuario destino
	* por iltimo registramos la transaccion
	*/
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

	/**
	* Aquí calculamos el cashback segppun el comercio que pusimos 
	* el monto es la cantidad sobre la cual calculamos el cashback
	*/
	double casback(TRADE comercio, double monto) {
		double porcentaje = 0.0;
		switch (comercio) { // dependiendo del comercio se asigna un porcentaje de cashback
		case TRADE::TELECOMUNICACIONES:
			porcentaje = 0.05; // 5% de cashback para telecomunicaciones
			break;
		case TRADE::RESTAURANTES:
			porcentaje = 0.02; // 2% de cashback para restaurantes
			break;
		case TRADE::FARMACIA:
			porcentaje = 0.03; // 3% de cashback para farmacias
			break;
		case TRADE::SUPERMERCADO:
			porcentaje = 0.01; // 1% de cashback para supermercados
			break;
		default:
			porcentaje = 0.0; // Sin cashback para otros comercios
			break;
		}
		return monto * porcentaje; // retornamos el monto por el porcentaje
	}

};
