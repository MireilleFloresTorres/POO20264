#pragma once
#include "Prerequisites.h"
#include "./FabricaAbstracta.h"
#include "./ProductoA1.h"
#include "./ProductoB1.h"

class
	FabricaConcreta : public FabricaAbstracta {

	ProductoA*
		crearProductoA() const override {
		return new ProductoA1();
	}
	ProductoB*
		crearProductoB() const override {
		return new ProductoB1();
	}
};