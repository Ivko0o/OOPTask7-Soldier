#pragma once
#include "Soldier.h"
#include <vector>

class Sergeant : public Soldier
{
public:
	Sergeant(string n, size_t a, size_t c, size_t s, string p) : Soldier(n, a, c, s), platoonDefinition(p) {};
	void PrintSoldiers();
	int TotalSoldiersCombatSkills();

	string GetPlatoonDefinition() {
		return platoonDefinition;
	}

private:
	string platoonDefinition;
	vector<Soldier> soldiers;
};

