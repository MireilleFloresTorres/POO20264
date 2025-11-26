#pragma once
#include"Prerequisites.h"
#include"GameProgrammingPatterns/Strategy/AttackStrategy.h"

class
Player {
public: 
	Player () = default; 
	~Player () = default; 

	void
		SetStrategy(std::unique_ptr <AttackStrategy > newStrategy) {
		if (!newStrategy) {
			throw std::invalid_argument("SetStrategy: newStrategy no pudo ser nnullptr");
		}
		m_strategy = std::move(newStrategy);
		}

	int Attack(int baseDamage) const {
		if (!m_strategy) {
			throw std::runtime_error("Attack : no se  ha establecido una strategia de ataque");
		}
		return m_strategy->Execute(baseDamage); 
	}

	private:
		std::unique_ptr<AttackStrategy>m_strategy; 
};