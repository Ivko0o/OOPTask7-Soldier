#pragma once
#include <iostream>
#include <vector>
#include "Spell.h"

using namespace std;

string ToString(SpellType type);

class MagicBook
{
	MagicBook(string bN) : bookName(bN) {};

public:
	void AddSpell(string s, size_t m, SpellType t);
	void UseSpell(const Spell& sp);
	void PrintSpells();

private:
	string bookName;
	vector<Spell> spells;
};


 