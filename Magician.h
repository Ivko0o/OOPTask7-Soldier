#pragma once
#include "Soldier.h"
#include "Sergeant.h"
#include <vector>

class Magician : public Soldier
{
public:
	Magician(string n, size_t a, size_t c, size_t s) : Soldier(n, a, c, s) {};

private:
	string battalionDefinition;
	vector<Sergeant> listSergeants;
	size_t magMana;
};

