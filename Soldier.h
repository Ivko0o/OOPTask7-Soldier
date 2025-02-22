#pragma once
#include <iostream>
#include <string>

using namespace std;

class Soldier
{
public:
	Soldier() : name(" "), age(0), combatSkills(0), salary(0) {};
	Soldier(string n, size_t a, size_t c, size_t s);

	const string GetName() const{
		return name;
	}

	const size_t GetAge() const {
		return age;
	}

	const size_t GetCombatSkills() const {
		return combatSkills;
	}

	const size_t GetSalary() const {
		return salary;
	}

private:
	string name;
	size_t age;
	size_t combatSkills;
	size_t salary;

};

