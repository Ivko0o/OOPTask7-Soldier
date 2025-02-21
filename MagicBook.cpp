#include "MagicBook.h"

//Adds spell to the magic book
void MagicBook::AddSpell(string s, size_t m, SpellType t) {
	Spell spell(s, m, t);
	spells.push_back(spell);
}

//Used spells are erased from the magic book
void MagicBook::UseSpell(const Spell& sp) {
	for (auto it = spells.begin(); it != spells.end();) {
		if (it->GetSpellDefinition() == sp.GetSpellDefinition()) {
			it = spells.erase(it);
		}
		else {
			++it;
		}
	}
}

//Print all spells in a book
void MagicBook::PrintSpells() {
	for (auto& spell : spells) {
		cout << "\nSpell Info\n";
		cout << "------------\n";
		cout << "Spell Definition: " << spell.GetSpellDefinition() << "\n";
		cout << "Spell Mana: " << spell.GetSpellMana() << "\n";
		cout << "Spell Type: " << ToString(spell.GetType()) << "\n";
	}
}

//Used to convert the skill type to string
string ToString(SpellType type) {
	switch (type) {
	case SpellType::Fire: return "Fire";
	case SpellType::Water: return "Water";
	case SpellType::Earth: return "Earth";
	case SpellType::Air: return "Air";
	default: return "Unknown";
	}
}