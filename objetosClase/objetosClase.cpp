#include "Enemigo.h"
#include <iostream>
int main()
{
	std::string playerName, rollDice;
	enemyBoat.setName("Trell");


	std::cout << "Trell, the deity of boats, has challenged you to a motorboat race!" << std::endl;
	std::cout << "Choose your name: " ;
	std::cin >> playerName;

	playerBoat.setName(playerName);

	std::cout << "The distance you'll travel with your vehicle will be chosen through a dice roll." << std::endl; 
	std::cout << "Good luck, " << playerName << ", she'll be reckless." << std::endl;

	std::cout << "------------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << " Controls: " << std::endl;
	std::cout << "						Roll the dice: Y " << std::endl;
	std::cout << "						Use nitro: N" << std::endl;
	std::cout << "						Try to escape: E" << std::endl;
	std::cout << std::endl;
	std::cout << "------------------------------------------------------------------------------------------------------------------------" << std::endl;

	for (size_t i = 0; i < 5; i++) {

			do {

			std::cin >> rollDice;
			rollDice = std::toupper(rollDice[0]);

			if (rollDice == "Y") {
				throwDice();
			}
			else if (rollDice == "E") {
				std::cout << "Trell: You're a failure! Face me, ya wuss!" << std::endl;
			}
			else if (rollDice == "N") {
				nitro();
			}
			else {
				std::cout << "Don't defy the program, " << playerName << "... Just type Y!" << std::endl;
			}
			} while (rollDice != "Y");

			throwDiceEnemy();

	}

		std::cout << "" << std::endl;
		std::cout << playerBoat.getName() << "'s boat has travelled " << playerBoat.getTravelledDistance() << "km, with a total speed of " << playerBoat.getSpeed() <<  " points" << std::endl;
		std::cout << enemyBoat.getName() << "'s boat has travelled " << enemyBoat.getTravelledDistance() << "km, with a total speed of " << enemyBoat.getSpeed() << " points" << std::endl;

	if (playerBoat.getTravelledDistance() > enemyBoat.getTravelledDistance()) { //Win

		std::cout << "Congratulations " << playerBoat.getName() << ", you've beaten " << enemyBoat.getName() << "!" << std::endl;
	}
	else if (playerBoat.getTravelledDistance() < enemyBoat.getTravelledDistance()) { //Lose
		
		std::cout << "Oh no, " << playerBoat.getName() << ", you've beaten by " << enemyBoat.getName() << "!" << std::endl;

	}
	else if (playerBoat.getTravelledDistance() < enemyBoat.getTravelledDistance()) { //Draw

		std::cout << "Oh wow! " <<  "Both of you have the same travelled distance... This is a draw!" << std::endl;

	}
}
 
