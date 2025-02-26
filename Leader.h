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


	double AmryTotalSalary() {
		double totalSalary = 0;
		for (auto& magician : magicians) {
			const vector<Sergeant>& allSergeants = magician.GetSergeants();
			for (auto& sergeant : allSergeants) {
				const vector<Soldier>& allSoldiers = sergeant.GetPlatoon();
				for (auto& soldier : allSoldiers) {
					totalSalary += soldier.GetSalary();
				}
				totalSalary += sergeant.GetSalary();
			}
			totalSalary += magician.GetSalary();
		}

		return totalSalary;
	}



private:
	string armyDefinition;
	vector<Magician> magicians;
};

