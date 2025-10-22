#pragma once

class
Cafeteria {
public: 
	Cafeteria ()= default; 
	~Cafeteria ()= default; 

	virtual void
		PrepararCafe() = 0;
};
