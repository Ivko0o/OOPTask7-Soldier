#pragma once
#include "Soldier.h"
#include <vector>

class Sergeant : public Soldier
{
public:
	Sergeant(string n, size_t a, size_t c, size_t s, string p) : Soldier(n, a, c, s), platoonDefinition(p) {
		if (n.empty())
			throw invalid_argument("\nMust enter name!\n");
		if (a < 18 || a > 65)
			throw invalid_argument("\nAge not suitable to be a soldier!\n");
		if (c <= 0)
			throw invalid_argument("\nCombat skills should be positive natural number!\n");
		if (s <= 0)
			throw invalid_argument("\nSalary must be a positive number!\n");

	};	
	void AddSoldier(const Soldier& soldier);
	size_t TotalSoldiersCombatSkills();
	void PrintSoldiers();
	string GetPlatoonDefinition();

	const vector<Soldier>& GetPlatoon() const {
		return platoon;
	}

private:
	string platoonDefinition;
	vector<Soldier> platoon;
};

