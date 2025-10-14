#pragma once

class Producto;

class
Builder {
	public:
	Builder() = default;
	~Builder() = default;
	
	virtual void
		buildPartA() = 0;
	virtual void 
		buildPartB() = 0;
	virtual Producto* getProducto() = 0;
};