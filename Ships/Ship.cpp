#include "Ship.h"

Ship::Ship(std::vector<IWeapon*> weapons
	, std::vector<IModule*> modules)
{
	this->weapons = weapons;
	this->modules = modules;
	for (auto module : modules)
	{
		module->ApplyAllBuffs();
	}
	this->InitModules();
}

void Ship::ShootFromAllWeapons()
{
	for (auto weapon : weapons)
	{
		weapon->Shoot();
	}
}

void Ship::InitModules()
{
		for (auto module : modules)
		{
			module->ApplyParent(this);
		}
}

void Ship::ApplyHealthBuff(float value)
{
	hp += value;
}

void Ship::ApplyShieldBuff(float value)
{
	shield += value;
}

void Ship::PrintInfo()
{
	std::cout << hp << " " << shield << std::endl;
}
