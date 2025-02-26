#include <iostream>
#include "Soldier.h"
#include "Sergeant.h"
#include "Spell.h"
#include "MagicBook.h"
#include "Leader.h"
#include "Magician.h"

int main()
{
	Spell FireBall("Fireball", 150, Fire);
	Spell IceBlast("IceBlast", 200, Water);
	Spell MudGolem("MudGolem", 100, Earth);
	Spell Meteor("Meteor", 300, Fire);
	Spell Tornado("Tornado", 250, Air);
	Spell FrostBite("FrostBite", 220, Water);

	MagicBook spellBook1;
	MagicBook spellBook2;

	spellBook1.AddSpell(FireBall);
	spellBook1.AddSpell(IceBlast);
	spellBook1.AddSpell(MudGolem);
	spellBook2.AddSpell(Meteor);
	spellBook2.AddSpell(Tornado);
	spellBook2.AddSpell(FrostBite);

	Soldier Ivelin("Ivelin", 33, 1000, 500);
	Soldier Martin("Martin", 36, 1200, 500);
	Soldier Todor("Todor", 33, 1000, 500);
	Soldier Velina("Velina", 29, 1000, 500);

	Sergeant Sergeant1("Simeon", 33, 2000, 1000, "Platoon I");
	Sergeant Sergeant2("Panayot", 33, 2500, 1000, "Platoon II");

	Sergeant1.AddSoldier(Ivelin);
	Sergeant1.AddSoldier(Martin);
	Sergeant2.AddSoldier(Todor);
	Sergeant2.AddSoldier(Velina);

	Magician Tihomir("Tihomir", 34, 3000, 2500, "Battalion I", 10000, spellBook1);
	Magician Miroslav("Miroslav", 34, 3000, 2500, "Battalion II", 10000, spellBook2);
	Tihomir.AddSergeant(Sergeant1);
	Miroslav.AddSergeant(Sergeant2);

	Leader Georgi("Georgi", 36, 10000, 20000, "Army I");
	Georgi.AddMag(Tihomir);
	Georgi.AddMag(Miroslav);

	cout << Georgi.AmryTotalSalary();
	
}
