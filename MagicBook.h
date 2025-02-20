#pragma once
#include <iostream>

using namespace std;

class MagicBook
{
public:


	void AddSpell(string sd, size_t m, Type t) {
		if (m <= 0) {
			std::cout << "\nMana has to be a positive value!\n";
			return;
		}
		if (t != Fire && t != Water && t != Earth && t != Air) {
			std::cout << "\nSpell type has to be Fire, Water, Earth or Air!\n";
			return;
		}

		Spell spell(sd, m, t);
			
		spellBook.push_back(spell);

		}

	void UsedSpell() {

	}



private:
	vector<Spell> spellBook;

};

 