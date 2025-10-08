#pragma once
#include "Prerequisites.h"

//producto abstrcto
class
	Product {
public:
	virtual void operation() = 0;
	virtual ~Product() = default;

};

//clase para la fabricfa 
class
	Fabrica {
public:
	virtual Product* createProduct() const = 0;
	virtual ~Fabrica() = default;
};

class
	ProductA : public Product {
public:
	void operation() override {
		std::cout << "Operacion de Producto A\n";
	}
};

class 
	FabricaA : public Fabrica {
public:
	Product* createProduct() const override {
		return new ProductA();
	}
};