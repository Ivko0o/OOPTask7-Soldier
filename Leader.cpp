#include "Leader.h"


Leader::Leader(string n, size_t a, size_t c, size_t s, string aD) : Soldier(n, a, c, s), armyDefinition(aD) {
	if (a < 18 || a > 65)
		throw invalid_argument("\nLeader must be over 40 years old!\n");
	if (c <= 0)
		throw invalid_argument("\nCombat skills must be a positive value!\n");
	if (s <= 0)
		throw invalid_argument("\nSalary must be a positive value!\n");
};


//Add magician(s) under the rule of a leader
void Leader::AddMag(const Magician& mag) {
	magicians.push_back(mag);
}

//Returns the total Magic Combat Power of the magicians under a certain leader
size_t Leader::TotalMagPower() {
	size_t total = 0;
	for (auto& magician : magicians) {
		total += magician.GetMagMana();
	}
	return total;
}

//Returns the average magician power under a certain leader
double Leader::AverageMagPower() {
	double total = 0;

	for (auto& magician : magicians) {
		total += magician.GetMagMana();
	}

	return magicians.empty() ? 0 : total / magicians.size();
}


void Leader::LeaderInfo() {
	cout << "Name: " << GetName() << "  Age: " << GetAge() << "  Combat Skills: " << GetCombatSkills() << "  Salary: " << GetSalary() << "  Army Definition: " << armyDefinition;
}