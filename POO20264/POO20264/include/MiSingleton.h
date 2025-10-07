#pragma once
#include "Prerequisites.h"

class
	MiSingleton {
private: 
	MiSingleton() : data(0) {} // Constructor privado para evitar instanciación externa
	~MiSingleton() = default; // Destructor privado para evitar destrucción externa

public:
	static MiSingleton* getInstance() {
		if ( instance == nullptr) {
			instance = new MiSingleton();
		} return instance;
	} 

	int 
		getData() const {
		return data;
	} // dato miembro

	void 
		setData(int value) {
		data = value;
	} // setter para dato miembro

private:
	//instancia unica de la clase 
	static MiSingleton* instance;
	int data; // dato miembro
};

