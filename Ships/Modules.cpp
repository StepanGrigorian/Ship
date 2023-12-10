#include "Modules.h"

HPBuffer::HPBuffer(Ship* parent, float value)
{
	this->value = value;
	this->parent = parent;
}

void HPBuffer::ApplyBuff()
{
	parent->ApplyHealthBuff(value);
}


ShieldBuffer::ShieldBuffer(Ship* parent, float value)
{
	this->value = value;
	this->parent = parent;
}

void ShieldBuffer::ApplyBuff()
{
	parent->ApplyShieldBuff(value);
}


void ModuleA::ApplyParent(Ship* parent)
{
	buffers = { 
		new HPBuffer(parent, 5), 
		new ShieldBuffer(parent, 10),
		new HPBuffer(parent, 2)};
	ApplyAllBuffs();
}

void ModuleA::ApplyAllBuffs()
{
	for (auto buffer : buffers)
	{
		buffer->ApplyBuff();
	}
}


void ModuleB::ApplyParent(Ship* parent)
{
	buffers = {
		new HPBuffer(parent, -10),
		//new ShieldBuffer(parent, 1),
		 };
	ApplyAllBuffs();
}

void ModuleB::ApplyAllBuffs()
{
	for (auto buffer : buffers)
	{
		buffer->ApplyBuff();
	}
}
