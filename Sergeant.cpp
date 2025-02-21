#include "Sergeant.h"

void Sergeant::PrintSoldiers() {
	for (auto& soldier : platoon) {
		std::cout << "\nSoldier Info\n";
		std::cout << "---------------\n";
		std::cout << "Name: " << soldier.GetName() << "\n";
		std::cout << "Age: " << soldier.GetAge() << "\n";
		std::cout << "Combat Skill: " << soldier.GetCombatSkills() << "\n";
		std::cout << "Salary: " << soldier.GetSalary() << "\n";

	}
}

bool Sergeant::AddSoldier(const Soldier& soldier) {
	platoon.push_back(soldier);
}

size_t Sergeant::TotalSoldiersCombatSkills() {
	size_t total = 0;
	for (auto& soldier : platoon) {
		total += soldier.GetCombatSkills();
	}

	return total;
}

string Sergeant::GetPlatoonDefinition() {
	return platoonDefinition;
}