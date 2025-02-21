#include <iostream>
#include "Soldier.h"
#include "Sergeant.h"
#include "Spell.h"
#include "MagicBook.h"
#include "Leader.h"
#include "Magician.h"

int main()
{
	try {
		Soldier soldier1("Ivelin", 33, 300, 2000);
	}
	catch (const char* txt) {
		cout << "\nError: " << txt << "\n";
	}
	

}

