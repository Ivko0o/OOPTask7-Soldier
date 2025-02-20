#pragma once
#include <iostream>

using namespace std;

class Soldier
{
public:
	Soldier() : name(" "), age(0), combatSkills(0), salary(0) {};
	Soldier(string n, size_t a, size_t c, size_t s);


	string GetName() {
		return name;
	}

	size_t GetAge() {
		return age;
	}

	size_t GetCombatSkills() {
		return combatSkills;
	}

	size_t GetSalary() {
		return salary;
	}

private:
	string name;
	size_t age;
	size_t combatSkills;
	size_t salary;

};

