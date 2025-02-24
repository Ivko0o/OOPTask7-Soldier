#include <iostream>
#include "Soldier.h"
#include "Sergeant.h"
#include "Spell.h"
#include "MagicBook.h"
#include "Leader.h"
#include "Magician.h"

int main()
{
	Spell FireBall("Fire Ball", 200, Fire);
	Spell IceWall("Ice Wall", 300, Water);
	Spell MudGolem("Mud Golem", 500, Earth);
	Spell FrostBite("Frost Bite", 250, Water);
	Spell Tornado("Tornado", 100, Air);
	Spell Meteor("Meteor", 300, Fire);

	MagicBook spellBook1;
	MagicBook spellBook2;

	spellBook1.AddSpell(FireBall);
	spellBook1.AddSpell(IceWall);
	spellBook1.AddSpell(MudGolem);
	spellBook2.AddSpell(FrostBite);
	spellBook2.AddSpell(Tornado);
	spellBook2.AddSpell(Meteor);

	Sergeant sergeant1("Mitio", 35, 1000, 500, "Platoon I");
	Sergeant sergeant2("Ganio", 25, 1500, 500, "Platoon II");
	Sergeant sergeant3("Williams", 29, 2000, 500, "Platoon III");
	Sergeant sergeant4("Matthew", 40, 2500, 500, "Platoon IV");


	Magician DarkMagician("Dark Magician", 22, 3000, 2000, "Battalion I", 5000, spellBook1);
	DarkMagician.AddSergeant(sergeant1);
	DarkMagician.AddSergeant(sergeant2);

	Magician WhiteMagician("White Magician", 30, 5000, 7000, "Battalion II", 10000, spellBook2);
	WhiteMagician.AddSergeant(sergeant3);
	WhiteMagician.AddSergeant(sergeant4);


	cout << DarkMagician.GetMagMana() << endl;
	cout << WhiteMagician.GetMagMana() << endl;

	DarkMagician.PrintSpells();

	DarkMagician.UseSpell(FireBall);

	cout << DarkMagician.GetMagMana() << endl;

	DarkMagician.PrintSpells();




	
}
