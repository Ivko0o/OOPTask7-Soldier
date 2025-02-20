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

	const string GetSpellDefinition() const{
		return spellDefinition;
	}

	const size_t GetSpellMana() const{
		return spellMana;
	}

	const SpellType GetType() const{
		return type;
	}

private:
	string spellDefinition;
	size_t spellMana;
	SpellType type;
};

