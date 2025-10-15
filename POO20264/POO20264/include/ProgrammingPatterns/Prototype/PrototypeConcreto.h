#pragma once
#include "Prerequisites.h"
#include"ProgrammingPatterns/Prototype/Prototype.h"
class
	ProtoypeConcreto : public Prototype {
public: 
	ProtoypeConcreto() = default;
	~ProtoypeConcreto() = default;

	Prototype*
		clone() const override {
		ProtoypeConcreto* copy = new ProtoypeConcreto();

		copy->config(value);
		return copy; 
	}

	void
		config(const std::string _value) override {
		value = _value;
	}

	void 
		info()const override {
		std::cout << "Prototype concreto with value " << value << std::endl;
	}
private: 
	std::string value; 
};
