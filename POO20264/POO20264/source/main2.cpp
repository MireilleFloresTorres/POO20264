#include "Prerequisites.h"
#include"ProgrammingPatterns/Prototype/PrototypeConcreto.h"
#include"ProgrammingPatterns/Prototype/Prototype.h"

int main() {
	Prototype* original = new ProtoypeConcreto(); 
	original->config("ORIGINAL");

	Prototype * clone = original->clone();
	original->info();
	clone->info(); 

	delete original;
	delete clone; 
	return 0;
}
