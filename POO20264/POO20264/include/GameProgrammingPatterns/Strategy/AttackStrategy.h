#pragma once
#include"Prerequisites.h"

class
	AttackStrategy {
public:
	virtual ~AttackStrategy() = default;
	virtual int Execute(int baseDamage) const = 0; 
};