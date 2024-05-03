#include "Enemigo.h"
#include <iostream>
#include <random>

boat enemyBoat;
boat playerBoat;

int boat::getSpeed() {
	return speed;
}

void boat::setSpeed(int pSpeed) {
	speed = pSpeed;
}

int boat::getTravelledDistance() {
	return travelledDistance;
}

void boat::setTravelledDistance(int pTravelledDistance) {
	travelledDistance = pTravelledDistance;
}

std::string boat::getName() {
	return name;
}

void boat::setName(std::string pName) {
	name = pName;
}

bool boat::getNitro() {
	return nitro;
}

void boat::setNitro(bool pNitro) {
	nitro = pNitro;
}
	/*
void boat::getPars() {
	std::cout << "Name: " << Name << ", Distance: " << travelledDistance << ", Speed: " << speed << std::endl;
}
*/


/*
boat::boat(int pSpeed, int pTravelledDistance, std::string pName) {
	speed = pSpeed;
	travelledDistance = pTravelledDistance;
	name = pName;
}
*/


int getRandomNumber(int min, int max) {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> distribution(min, max);

	return distribution(gen);
}


void throwDice() {
	int randNum = getRandomNumber(1, 6);
	playerBoat.setSpeed(randNum + playerBoat.getSpeed());
	std::cout << "You rolled the dice and got a: " << randNum << std::endl;
	playerBoat.setTravelledDistance(playerBoat.getTravelledDistance() + (playerBoat.getSpeed() * 100));
}

void throwDiceEnemy() {
	int randNum = getRandomNumber(1, 6);
	enemyBoat.setSpeed(randNum + enemyBoat.getSpeed());
	std::cout << enemyBoat.getName() << " rolled a " << randNum << std::endl;
	enemyBoat.setTravelledDistance(enemyBoat.getTravelledDistance() + (enemyBoat.getSpeed() * 100));
}

void nitro() {
	int randNum = getRandomNumber(0, 1);
	if (randNum == 0) {
		playerBoat.setSpeed(playerBoat.getSpeed() / 2);
		std::cout << "Your boat speed has been cut by half!" << " You have " << playerBoat.getSpeed() << " now!" << std::endl;

	}
	else if (randNum == 1) {
		playerBoat.setSpeed(playerBoat.getSpeed() * 2);
		std::cout << "Your boat speed has been doubled!" << " You have " << playerBoat.getSpeed() <<  " now!" << std::endl;

	}
}
