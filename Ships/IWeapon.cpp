#include <iostream>
#include "IWeapon.h"

void WeaponA::Shoot()
{
	if (canShoot)
	{
		std::cout << "Weapon A shoot\n";
		canShoot = false;
	}
}

void WeaponA::Reload()
{
	// Wait 2 seconds
	canShoot = true;
}

void WeaponB::Shoot()
{
	std::cout << "Weapon B shoot\n";
}

void WeaponC::Shoot()
{
	std::cout << "Weapon C shoot\n";
}
