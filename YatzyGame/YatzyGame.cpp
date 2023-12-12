// YatzyGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <map>
#include "DiceRollClass.h"

void MiniYatzy() {
	DiceRollClass diceRollClass;
	std::map<int, int> score;

	for (size_t i = 1; i < 7; i++)
	{
		score.insert({ i, -1 });
	}

	std::map<int, int> amount;

	for (size_t i = 1; i < 7; i++)
	{
		amount.insert({ i, 0 });
	}

	std::vector<int> rolledDice;

	diceRollClass.DiceRoll(rolledDice);

	std::cout << "You threw: ";
	for (auto it = rolledDice.begin(); it != rolledDice.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	
	for (size_t i = 0; i < rolledDice.size(); i++)
	{
		std::cout << "Before " << amount.at(rolledDice[i]) << std::endl;
		++amount.at(rolledDice[i]);
		std::cout << "After " << amount.at(rolledDice[i]) << std::endl;
	}

	std::cout << "Which numbers would you like to keep?" << std::endl;

}

int main()
{
	bool ongoing = true;
	int menuSelect;

	while (ongoing)
	{
		std::cout << "Welcome to MiniYatzy!" << std::endl;
		std::cout << "Please pick one of the options listed below:" << std::endl;
		std::cout << " 1) start MiniYatzy" << std::endl;
		std::cout << " 0) quit" << std::endl;
		std::cin >> menuSelect;

		while (!std::cin.good())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Please only enter numbers!" << std::endl;
			std::cin >> menuSelect;
		}

		if (menuSelect == 1)
		{
			
			std::cout << "Starting, try to get the most numbers of a kind!" << std::endl;
			
			MiniYatzy();

		}
		else if (menuSelect == 0) {
			ongoing = false;
		}
	}
}