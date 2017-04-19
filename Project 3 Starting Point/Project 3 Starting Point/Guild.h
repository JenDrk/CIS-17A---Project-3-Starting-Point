#pragma once
#include <string>
#include <vector>
#include <memory>
#include "Adventurer.h"
#include "Mage.h"
#include "Paladin.h"
#include "Ranger.h"
#include "Warrior.h"

class Guild
{
private:
	std::vector<std::shared_ptr<Mage>> _mages;
	std::vector<std::shared_ptr<Paladin>> _paladins;
	std::vector<std::shared_ptr<Ranger>> _rangers;
	std::vector<std::shared_ptr<Warrior>> _warriors;
	std::vector<std::shared_ptr<Adventurer>> _adventurers;
	
	std::string _name;
	int _gold = 0;
public:
	Guild(std::string name);
	~Guild();

	std::string GetName() const { return _name; }
	void AddMage(std::string name);
	void AddPaladin(std::string name);
	void AddRanger(std::string name);
	void AddWarrior(std::string name);
	void AddAdventurer(std::shared_ptr<Adventurer> adventurer);

	std::string GetInfo();

	std::string AttackWithMages();
	std::string AttackWithPaladins();
	std::string AttackWithRangers();
	std::string AttackWithWarriors();
	std::string AttackWithAllAdventurers();
};

