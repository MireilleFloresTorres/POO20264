#pragma once
#include"GameProgrammingPatterns/Facade/AudioLouder.h"
#include"GameProgrammingPatterns/Facade/AudioMixer.h"
#include"GameProgrammingPatterns/Facade/AudioEffectProcessor.h"

class
AudioFacade {
public: 
	AudioFacade() = default; 
	~AudioFacade() = default; 

	void
	initialize() {
		std::cout << "[AudioFacade] Inicializando sistema audio.." << std::endl; 
		mixer.setMasterVolume(0.8f);
		effects.setReverEnabled(true);
	}

	void
		PlayBacgroundMusic(const std::string& musicPath) {
		std::cout << "[AudioFacade] Solicitando reproduccion de música de foondo" << std::endl;

		if (louder.loudSound(musicPath)) {
			const int musicChannelId = 0;
			mixer.playChannel(musicChannelId);
		}
		else
		{
			std::cerr << "[AudioFacade] erroor al  cargar la musica: "
				<< musicPath << std::endl; 
		}
	}
	
	void playSfx(const std::string& sfxPath) {
		std::cout << "[AudioFacade] Solicitando reproduccion sfx" << std::endl;
		if (louder.loudSound(sfxPath)) {
			const int sfxChannelId = 0;
			mixer.playChannel(sfxChannelId);
		}
		else
		{
			std::cerr << "[AudioFacade] erroor al  cargar el SFX: "
				<< sfxPath << std::endl;
		}
	}

	void
		setMasterVolume(float volume) {
		effects.setReverEnabled(volume); 
	}

	void
		enabledReverb(bool enabled) {
		effects.setReverEnabled(enabled);
	}

private:
	AudioLouder			louder; 
	AudioMixer			mixer; 
	AudioEffectProcessor effects; 
};