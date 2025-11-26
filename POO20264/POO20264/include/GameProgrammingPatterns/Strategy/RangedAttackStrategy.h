#pragma once
#include"Prerequisites.h"
#include"GameProgrammingPatterns/Strategy/AttackStrategy.h"

class
	RangedAttackStrategy : public AttackStrategy {

	RangedAttackStrategy() = default;
	~RangedAttackStrategy() = default; 

	int Execute(int baseDamage) const override {
		return static_cast<int>(baseDamage * 0.9); 
	}
};