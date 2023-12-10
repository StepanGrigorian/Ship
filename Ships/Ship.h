#pragma once
#include "IWeapon.h"
#include <vector>

class Ship
{
public:
	std::vector<IWeapon*> weapons;

	Ship(std::vector<IWeapon*> weapons);

};