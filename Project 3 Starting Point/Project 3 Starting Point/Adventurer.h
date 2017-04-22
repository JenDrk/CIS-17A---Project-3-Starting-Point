#pragma once
#include <iostream>
class Adventurer
{
private:
	std::string _name;
public:
	Adventurer();
	~Adventurer();

	std::string virtual Attack() { return _name + "attacks!"; }
};
