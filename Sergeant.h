#pragma once
#include "Soldier.h"
#include <vector>

class Sergeant : public Soldier
{
public:
	Sergeant(string n, size_t a, size_t c, size_t s, string p) : Soldier(n, a, c, s), platoonDefinition(p) {};	
	bool AddSoldier(const Soldier& soldier);
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

