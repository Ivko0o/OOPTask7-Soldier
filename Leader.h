#pragma once
#include "Soldier.h"
#include "Magician.h"
#include <vector>

class Leader : public Soldier
{
public:
	Leader(string n, size_t a, size_t c, size_t s, string aD);

	void AddMag(const Magician& mag);
	size_t TotalMagPower();
	double AverageMagPower();
	void LeaderInfo();

private:
	string armyDefinition;
	vector<Magician> magicians;
};

