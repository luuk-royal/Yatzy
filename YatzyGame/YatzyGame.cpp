// YatzyGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <map>
#include "DiceRollClass.h"

int main()
{
	DiceRollClass diceRollClass;
	std::map<int, int> test;

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

			std::vector<int> test = diceRollClass.DiceRoll(5);
			std::cout << "You threw: " << std::endl;
		}
		else if (menuSelect == 0) {
			ongoing = false;
		}
	}
}