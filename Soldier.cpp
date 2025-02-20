#include "Soldier.h"

Soldier::Soldier(string n, size_t a, size_t c, size_t s) : name(n), age(a), combatSkills(c), salary(s) {
	if (a < 25 || a > 55)
		throw "\nAge not suitable to be a soldier!\n";
	if (combatSkills <= 0)
		throw "\nCombat skills should be positive natural number!\n";
	if (salary <= 0)
		throw "\nSalary must be a positive number!\n";
};