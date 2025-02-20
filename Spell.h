#pragma once
#include <iostream>
#include <string>

using namespace std;

enum SpellType
{
	Fire,
	Water,
	Earth,
	Air
};

class Spell
{
public:
	//Default constructor
	Spell() : spellDefinition(""), spellMana(0), type(Fire) {};
	Spell(string s, size_t m, SpellType t);

	string GetSpellDefinition() {
		return spellDefinition;
	}

	size_t GetSpellMana() {
		return spellMana;
	}

	SpellType GetType() {
		return type;
	}

private:
	string spellDefinition;
	size_t spellMana;
	SpellType type;
};

