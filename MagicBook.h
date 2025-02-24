#pragma once
#include <iostream>
#include <vector>
#include "Spell.h"

using namespace std;

string ToString(SpellType type);

class MagicBook
{
public:
	MagicBook() : bookName("") {};
	MagicBook(string bN) : bookName(bN) {};

	void AddSpell(const Spell& spell);
	void PrintSpells();

	vector<Spell>& GetSpells() {
		return spells;
	}

private:
	string bookName;
	vector<Spell> spells;
};


 