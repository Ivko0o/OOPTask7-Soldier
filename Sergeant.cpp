#include "Sergeant.h"

void Sergeant::PrintSoldiers() {
	for (auto& soldier : soldiers) {
		std::cout << "\nSoldier Info\n";
		std::cout << "---------------\n";
		std::cout << "Name: " << soldier.GetName() << "\n";
		std::cout << "Age: " << soldier.GetAge() << "\n";
		std::cout << "Combat Skill: " << soldier.GetCombatSkills() << "\n";
		std::cout << "Salary: " << soldier.GetSalary() << "\n";

	}
}

int Sergeant::TotalSoldiersCombatSkills() {
	int total = 0;
	for (auto& soldier : soldiers) {
		total += soldier.GetCombatSkills();
	}

	return total;
}