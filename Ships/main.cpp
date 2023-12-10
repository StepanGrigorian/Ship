#include <iostream>
#include "Ship.h"
#include "IWeapon.h"

int main()
{
	Ship* Ship1 = 
		new Ship({ 
		new WeaponA(), 
		new WeaponB(), 
		new WeaponA(), 
		new WeaponC()}
	);
	Ship1->weapons[1]->Shoot();
}