#include "simulator.h"
#include <iostream>
#include <string>
#include <stdexcept>

//Takes input from user. 
std::string Simulator::getInput()
{
	std::string input = "";
	std::getline(std::cin, input);
	return input;
}

//Cheaks input against desired temperature. 
void Simulator::askOwner(Agent& pAg, Environment& pEnv)
{
	bool loop2 = true;
	std::string input = "";
	int intInput = 0;

	while (loop2)
	{
		std::cout << "Enter a desired temperature, or enter \"QUIT\" to quit." << std::endl;
		input = getInput();

		try
		{
			intInput = stoi(input);
			std::cout << "Desired temperature: " << intInput << std::endl;
			pAg.setDesiredTemp(intInput);
			loop2 = false;
		}
		catch (const std::invalid_argument& ia)
		{
			if (input == "QUIT")
			{
				std::cout << "Quiting." << std::endl;
				loop = false;
				loop2 = false;
			}
			else
			{
				std::cout << "Invalid input. Try again." << std::endl;
				loop2 = true;
			}
		}
	}
}


void Simulator::run(Agent& pAg, Environment& pEnv)
{
	while (loop)
	{
		for (int i = 0; i < 10; ++i)
		{
			pEnv.iteration();
			pAg.act(pEnv);
		}
		askOwner(pAg, pEnv);
	}
}