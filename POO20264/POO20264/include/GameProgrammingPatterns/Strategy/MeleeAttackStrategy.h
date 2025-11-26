#pragma once
#include"Prerequisites.h"
#include"GameProgrammingPatterns/Strategy/AttackStrategy.h"

class MeleeAttackStrategy : public AttackStrategy {
	MeleeAttackStrategy() = default; 
	~MeleeAttackStrategy() = default; 

	int Execute(int baseDamage) const override {
		return static_cast<int>(baseDamage * 1.2); 
	}
};