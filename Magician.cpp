#include "Magician.h"


Magician::Magician(string n, size_t a, size_t c, size_t s, string bD, size_t mM, MagicBook b) : Soldier(n, a, c, s), battalionDefinition(bD), magMana(mM), book(b) {
	if (a < magAge)
		throw std::string("\nMagician must be over ") + std::to_string(magAge) + " years old!\n";
	if (c <= 0)
		throw "\nCombat skills must be a positive value!\n";
	if (s <= 0)
		throw "\nSalary must be a positive value!\n";
	if (mM <= 0)
		throw "\nMagician mana must be a positive value!\n";
};