#include "Prerequisites.h"
#include"GameProgrammingPatterns/State/PlayerState.h"
#include"GameProgrammingPatterns/State/Player.h"
#include"GameProgrammingPatterns/State/NormalState.h"
#include"GameProgrammingPatterns/State/HurtState.h"

int main() {

	Player* player = new Player(); 
	player->Attack(); 
	player->Defend(); 
	player->move();
	std::cout << "PLayer gets hurt!" << std::endl; 
	player->SetState(new HurtState()); 
	player->Attack();
	player->Defend();
	player->move();
	std::cout << "PLayer calms down to normal state " << std::endl;
	player->SetState(new NormalState());
	player->Attack();
	player->Defend();
	player->move();

	return 0;
}
