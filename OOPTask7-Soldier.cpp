#include <iostream>
#include "Soldier.h"
#include "Sergeant.h"
#include "Spell.h"
#include "MagicBook.h"
#include "Leader.h"
#include "Magician.h"

int main()
{
	Spell spell1("Fireball", 100, Fire);
	Spell spell2("Glacier", 150, Water);
	Spell spell3("Mud Wall", 130, Earth);

	MagicBook book1;
	book1.AddSpell(spell1);
	book1.AddSpell(spell2);
	book1.AddSpell(spell3);

	book1.PrintSpells();
}
