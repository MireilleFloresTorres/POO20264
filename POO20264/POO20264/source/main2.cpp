#include "Prerequisites.h"
#include"GameProgrammingPatterns/Facade/AudioFacade.h"

int main() {
	AudioFacade audio;
	
	audio.initialize(); 
	audio.PlayBacgroundMusic("assets/music/menu_them.ogg"); 
	audio.playSfx("assets/sfx/jump.wav"); 
	audio.setMasterVolume(0.5f); 
	audio.enabledReverb(false); 
	
	return 0;
}
