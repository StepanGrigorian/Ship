#include <iostream>
#include "Ship.h"
#include "Weapons.h"
#include "Modules.h"

int main()
{
	Ship* Ship1 =
		new Ship(
			{ 
				new WeaponA(), new WeaponB(), new WeaponA(), new WeaponC()
			},
			{
				new ModuleA(),
				new ModuleB()
			}
		);
	Ship1->PrintInfo();
}