#pragma once

class IWeapon
{
protected:
	bool canShoot = true;
	virtual void Reload() = 0;
public:
	virtual void Shoot()  = 0;
};

class WeaponA : public IWeapon
{
protected:
	virtual void Reload() override;
public:
	virtual void Shoot() override;
};

class WeaponB : public IWeapon
{
protected:
	virtual void Reload() override;
public:
	virtual void Shoot() override;
};

class WeaponC : public IWeapon
{
protected:
	virtual void Reload() override;
public:
	virtual void Shoot() override;
};