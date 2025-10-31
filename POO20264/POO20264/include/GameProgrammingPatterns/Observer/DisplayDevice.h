#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Observer/observer.h"

class
	DisplayDevice : public Observer {
public:
	DisplayDevice() = default; 
	~DisplayDevice() = default; 

	void 
		onNotify(int _value) override {
		std::cout << "Display Device : Tempeerature update to " <<
			_value << " degrees " << std::endl; 
	}
};