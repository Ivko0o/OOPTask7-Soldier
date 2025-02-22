#include "Soldier.h"

Soldier::Soldier(string n, size_t a, size_t c, size_t s) : name(n), age(a), combatSkills(c), salary(s) {
	if (n.empty())
		throw invalid_argument("\nMust enter name!\n");
	if (a < 18 || a > 65)
		throw invalid_argument("\nAge not suitable to be a soldier!\n");
	if (combatSkills <= 0)
		throw invalid_argument("\nCombat skills should be positive natural number!\n");
	if (salary <= 0)
		throw invalid_argument("\nSalary must be a positive number!\n");
};