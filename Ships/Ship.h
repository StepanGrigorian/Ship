#pragma once
#include "Weapons.h"
#include "Modules.h"
#include <vector>
#include <iostream>

class IModule;
class Ship
{
private:
	float hp = 10;
	float shield = 5;
	std::vector<IWeapon*> weapons;
	std::vector<IModule*> modules;

public:

	Ship(std::vector<IWeapon*> weapons,
		std::vector<IModule*> modules);

	void ShootFromAllWeapons();
	void InitModules();
	void ApplyHealthBuff(float value);
	void ApplyShieldBuff(float value);

	void PrintInfo();
};