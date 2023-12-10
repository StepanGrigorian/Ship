#pragma once

class IWeapon
{
protected:
	bool canShoot = true;
public:
	virtual void Shoot()  = 0;
	virtual void Reload() = 0;
};

class WeaponA : public IWeapon
{
public:
	virtual void Shoot() override;
	virtual void Reload() override;
};

class WeaponB : public IWeapon
{
public:
	virtual void Shoot() override;
	virtual void Reload() override;
};

class WeaponC : public IWeapon
{
public:
	virtual void Shoot() override;
	virtual void Reload() override;
};