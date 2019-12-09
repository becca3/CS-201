#include "environment.h"
#include "agent.h"
#include "simulator.h"

#include <iostream>
#include <string>
#include <stdexcept>

std::string getInput()
{
	std::string input = "";
	std::getline(std::cin, input);
	return input;
}


int main()
{
	bool loop = true;
	string input = "";
	int intInput = 0;

	while (loop)
	{
		std::cout << "Enter a temmperature." << std::endl;
		input = getInput();

		try
		{
			intInput = stoi(input);
			std::cout << "Current temperature: " << intInput << std::endl;
			loop = false;
		}
		catch (const std::invalid_argument& ia)
		{
			std::cout << "Invalid input. Try again." << std::endl;
			loop = true;
		}
	}
	Enviornment env{ intInput };

	loop = true;
	while (loop)
	{
		std::cout << "Enter a desired temperature." << std::endl;
		input = getInput();

		try
		{
			intInput = stoi(input);
			std::cout << "Desired temperature: " << intInput << std::endl;
			loop = false;
		}
		catch (const std::invalid_argument& ia)
		{
			std::cout << "Invalid input. Try again." << std::endl;
			loop = true;
		}
	}
	Agent ag{ intInput };

	Simulator sim{};
	sim.run(ag, env);
}