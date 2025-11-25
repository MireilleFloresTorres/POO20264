#pragma once
class VehiculoState {
public: 
	virtual ~VehiculoState() = default; 
	virtual void acelerar() = 0; 
	virtual void frenar() =  0; 
};