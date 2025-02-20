#include "Spell.h"

//Constructor
Spell::Spell(string s, size_t m, SpellType t) : spellDefinition(s), spellMana(m), type(t) {
	if (spellMana <= 0)
		throw "\nMana has to be positive value!\n";
	if (type != Fire && type != Water && type != Earth && type != Air)
		throw "\nSpell type has to be Fire, Water, Earth or Air!\n";
};
