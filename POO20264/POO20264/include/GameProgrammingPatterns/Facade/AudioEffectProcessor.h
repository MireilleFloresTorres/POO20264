#pragma once
#include"Prerequisites.h"

class
AudioEffectProcessor {
public: 
	AudioEffectProcessor() = default; 
	~AudioEffectProcessor() = default; 

	void
	setReverEnabled(bool enabled) 
	{
		std::cout << "[AudioEffectsPProcessor] Reverberacion"
			<< (enabled ? "activada" : "desactivada") << std::endl; 
	}
};