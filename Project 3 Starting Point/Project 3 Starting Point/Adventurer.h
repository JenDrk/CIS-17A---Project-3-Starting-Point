#pragma once
#include <iostream>
class Adventurer
{
public:
	Adventurer();
	~Adventurer();

	std::string virtual Attack();
	std::string AttackWithMages() { return _name + " casts magic missle at the darkness!"; }
};

