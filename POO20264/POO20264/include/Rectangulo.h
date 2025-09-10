#pragma once

#include "Prerequisites.h"

class
    Rectangulo {
private:     float base;
			 float altura;
public:      Rectangulo() = default;
			 ~Rectangulo() = default;
	
			 void setBase(float b){
				 base = b;
			 }
			 void setAltura(float a){
				 altura = a;
			 }
			 float area() const{
				 return base * altura;
			 }
			 float perimetro() const{
				 return 2 * (base + altura);
			 }
};