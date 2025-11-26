#pragma once
#include"Prerequisites.h"
#include"GameProgrammingPatterns/Strategy/AttackStrategy.h"

class
	MagicAttackStrategy : public AttackStrategy {

	MagicAttackStrategy() = default;
	~MagicAttackStrategy() = default;

	int Execute(int baseDamage) const override {
		return static_cast<int>(baseDamage * 1.8);
	}
};