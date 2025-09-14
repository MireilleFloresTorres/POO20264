#pragma once
#include "Prerequisites.h"
#include "CuentaBancaria.h"

class CuentaEspecial : public CuentaBancaria {
public:
    CuentaEspecial(std::string nombreTitular) : CuentaBancaria(nombreTitular) {}

    void transferirDinero(double monto, CuentaEspecial& destino) {
        transferir(monto, destino); // Acceso al m�todo protected de la base
    }
};

