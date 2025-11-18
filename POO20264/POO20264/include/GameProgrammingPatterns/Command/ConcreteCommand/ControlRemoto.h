#pragma once
#include"Prerequisites.h"
#include"GameProgrammingPatterns/Command/Command.h"

class
ControlRemoto {
public: 
	ControlRemoto()= default; 
	~ControlRemoto()= default; 

	void 
		ejecutarComando(Comando* _comando) {
		_comando->ejecutar(); 
		m_historial.push_back(_comando); 
	}

	void
		deshacerUltimoComando() {
		if (!m_historial.empty()) {
			Comando* ultimoComando = m_historial.back(); 
			ultimoComando->deshacer(); 
			m_historial.pop_back(); 
		}
	}

private: 
	std::vector<Comando*> m_historial; 
};