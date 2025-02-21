#pragma once
#include "Soldier.h"
#include "Sergeant.h"
#include "MagicBook.h"
#include <vector>

const size_t magAge = 18;

class Magician : public Soldier
{
public:
	Magician(string n, size_t a, size_t c, size_t s, string bD, size_t mM, MagicBook b);
	void AddSergeant(const Sergeant& sergeant);
	size_t SergeantsCombatSkills();

	const vector<Sergeant>& GetSergeants() const{
		return sergeants;
	}

	size_t GetMagMana() const {
		return magMana;
	}

private:
	MagicBook book;
	string battalionDefinition;
	vector<Sergeant> sergeants;
	size_t magMana;
};

