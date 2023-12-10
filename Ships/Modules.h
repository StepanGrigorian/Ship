#pragma once
#include <vector>
#include "Ship.h"

class Ship;
class IBuffer
{
protected:
	float value = 0;
	Ship* parent = nullptr;
public:
	virtual void ApplyBuff() = 0;
};

class HPBuffer : public IBuffer
{
public:
	HPBuffer(Ship* parent, float value);
	virtual void ApplyBuff() override;
};

class ShieldBuffer : public IBuffer
{
public:
	ShieldBuffer(Ship* parent, float value);
	virtual void ApplyBuff() override;
};

class IModule
{
public:
	virtual void ApplyAllBuffs() = 0;
	virtual void ApplyParent(Ship* parent) = 0;
};

class ModuleA : public IModule
{
private:
	std::vector<IBuffer*> buffers;

public:
	virtual void ApplyParent(Ship* parent) override;
	virtual void ApplyAllBuffs() override;
};

class ModuleB : public IModule
{
private:
	std::vector<IBuffer*> buffers;

public:
	ModuleB() = default;
	virtual void ApplyParent(Ship* parent) override;
	virtual void ApplyAllBuffs() override;
};