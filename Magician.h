#pragma once
#include "Soldier.h"
#include "Sergeant.h"
#include "MagicBook.h"
#include <vector>

const size_t magAge = 18;

class Magician : public Soldier
{
public:
	Magician(string n, size_t a, size_t c, size_t s, string bD, size_t mM, MagicBook b) : Soldier(n, a, c, s), battalionDefinition(bD), magMana(mM), book(b) {};

private:
	MagicBook book;
	string battalionDefinition;
	vector<Sergeant> listSergeants;
	size_t magMana;
};

