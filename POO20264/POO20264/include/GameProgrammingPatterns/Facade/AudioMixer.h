#pragma once
#include"Prerequisites.h"

class
AudioMixer {
public: 
	AudioMixer() = default; 
	~AudioMixer() = default; 

	void setMasterVolume(float volume) {
		std::cout << "[AudioMixer] volumen maestro establecido" << volume << std::endl;
	}

	void
	playChannel(int channelId) {
		std::cout << "[AudioMixer] rreproducioendo cana" << channelId << std::endl; 
	}
};