#include "Magician.h"


Magician::Magician(string n, size_t a, size_t c, size_t s, string bD, size_t mM, MagicBook b) : Soldier(n, a, c, s), battalionDefinition(bD), magMana(mM), book(b) {
	if (n.empty())
		throw invalid_argument("\nMust enter name!\n");
	if (a < 18 || a > 65)
		throw invalid_argument("\nAge not suitable to be a soldier!\n");
	if (c <= 0)
		throw invalid_argument("\nCombat skills should be positive natural number!\n");
	if (s <= 0)
		throw invalid_argument("\nSalary must be a positive number!\n");
	if (mM <= 0)
		throw invalid_argument("\nMana must be a positive number!\n");
};

void Magician::AddSergeant(const Sergeant& sergeant) {
	sergeants.push_back(sergeant);
}

//Calculates the combat skills of all sergeants under the magician that controls them
size_t Magician::SergeantsCombatSkills() {
	size_t total = 0;
	for (auto& sergeant : sergeants) {
		total += sergeant.GetCombatSkills();
	}
	return total;
}

void Magician::PrintSergeants() {
	for (auto& sergeant : sergeants) {
		cout << "\nSergeant Info of " << GetName() << "`s sergents\n";
		cout << "---------------\n";
		cout << "Name: " << sergeant.GetName() << "\n";
		cout << "Age: " << sergeant.GetAge() << "\n";
		cout << "Combat Skill: " << sergeant.GetCombatSkills() << "\n";
		cout << "Salary: " << sergeant.GetSalary() << "\n";

	}
}

//This will remove a spell once the magician uses it
void Magician::UseSpell(const Spell& sp) {

	vector<Spell>& allSpells = book.GetSpells();
	bool isFound = false;

	if (sp.GetSpellMana() > magMana) {
		cout << "Not enough mana!";
		return;
	}

	for (auto it = allSpells.begin(); it != allSpells.end();) {
		if (it->GetSpellDefinition() == sp.GetSpellDefinition()) {
			it = allSpells.erase(it);
			isFound = true;
		}
		else {
			++it;
		}

	}

	if (!isFound) {
		cout << "\nSpell was not found!\n";
		return;
	}

	magMana -= sp.GetSpellMana();

}