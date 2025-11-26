#pragma once
#include"Prerequisites.h"
class
AudioLouder {
public: 
	AudioLouder () = default; 
	~AudioLouder () = default; 

	bool
		loudSound(const std::string& filePath) {
		std::cout << "[Audiolouder] cargando sonido desde" << filePath << std::endl; 
		return true; 
	}
};