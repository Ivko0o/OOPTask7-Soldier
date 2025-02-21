#include "Leader.h"


Leader::Leader(string n, size_t a, size_t c, size_t s, string aD) : armyDefinition(aD) {
	if (a <= 40)
		throw "\nLeader must be over 40 years old!\n";
	if (c <= 0)
		throw "\nCombat skills must be a positive value!\n";
	if (s <= 0)
		throw "\nSalary must be a positive value!\n";
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
