// YatzyGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "DiceRollClass.h"

int main()
{
	std::cout << "Welcome to Yatzy!" << std::endl;

	/*
	try
	{
		std::vector<int> test;
	}
	catch (const std::exception& e)
	{
		printf(e.what());
	}
	*/

	std::cout << "Checking files done, moving to menu!" << std::endl;
	bool ongoing = true;
	int menuSelect;

	while (ongoing)
	{
		std::cout << "Welcome to the main menu" << std::endl;
		std::cout << "Please pick one of the options listed below:" << std::endl;
		std::cout << " 1) start match" << std::endl;
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
			runQuiz();
		}
		else if (menuSelect == 0) {
			ongoing = false;
		}
	}
}