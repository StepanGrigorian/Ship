#include <iostream>
#include <thread>
#include "Weapons.h"

using namespace std::chrono_literals;

void WeaponA::Shoot()
{
	if (canShoot)
	{
		std::cout << "Weapon A shoot\n";
		canShoot = false;
		Reload();

	}
}

void WeaponA::Reload()
{
	std::cout << "Weapon A reload 2 seconds\n";
	// Wait 2 seconds
	std::this_thread::sleep_for(2000ms);
	//thread lock
	canShoot = true;
}

void WeaponB::Shoot()
{
	if (canShoot)
	{
		std::cout << "Weapon B shoot\n";
		canShoot = false;
		Reload();
	}
}

void WeaponB::Reload()
{
	std::cout << "Weapon B reload 3 seconds\n";
	// Wait 3 seconds
	canShoot = true;
}

void WeaponC::Shoot()
{
	if (canShoot)
	{
		std::cout << "Weapon C shoot\n";
		canShoot = false;
		Reload();
	}
}

void WeaponC::Reload()
{
	std::cout << "Weapon C reload 5 seconds\n";
	// Wait 5 seconds
	canShoot = true;
}
