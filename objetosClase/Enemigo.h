#pragma once
#include <iostream>
class boat
{


private:
	int speed;
	int travelledDistance;
	std::string name;
	bool nitro;

public:
	boat() : speed(0), travelledDistance(0), name(""), nitro(true) {}

	int getSpeed();
	void setSpeed(int pSpeed);
	
	int getTravelledDistance();
	void setTravelledDistance(int pTravelledDistance);

	std::string getName();
	void setName(std::string pName);

	bool getNitro();
	void setNitro(bool pNitro);

	/*void getPars(); */

	//boat(int pHp, int pAtk, std::string pName);

};

extern boat enemyBoat, playerBoat;

void throwDice();

void throwDiceEnemy();

void nitro();

int getRandomNumber(int min, int max);
