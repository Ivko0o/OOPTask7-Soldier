#pragma once
#include "Soldier.h"
#include "Sergeant.h"
#include "MagicBook.h"
#include <vector>


class Magician : public Soldier
{
public:
	Magician(string n, size_t a, size_t c, size_t s, string bD, size_t mM, MagicBook b);

	void PrintSergeants();
	void UseSpell(const Spell& sp);
	void AddSergeant(const Sergeant& sergeant);

	size_t SergeantsCombatSkills();
	

	const vector<Sergeant>& GetSergeants() const{
		return sergeants;
	}

	size_t GetMagMana() const {
		return magMana;
	}

	void PrintSpells() {
		book.PrintSpells();
	}

private:
	MagicBook book;
	string battalionDefinition;
	vector<Sergeant> sergeants;
	size_t magMana;
};

