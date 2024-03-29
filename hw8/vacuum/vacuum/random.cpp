#include "random.h"
#include "agent.h"
#include "environment.h"

#include <iostream> 
#include <iomanip> 
#include <random> 
#include <cmath> 
#include <stdlib.h> 

// Clear console.
void clearConsole() 
{
	std::cout << "\033[2J\033[1;1H";
}

// Wait for user response.
void waitForContinue()
{
	std::cout << std::endl << "Press enter to continue";
	getchar();
}

// Print environment's current state
void printState(Environment& env, Agent& agt) {

	// Print room status
	std::cout << "Current status: " << std::endl;
	for (int i = 0; i < 8; i++) 
	{
		std::cout << "Room " << i + 1 << ": ";

		bool val = env.getRoom(i);
		if (val)
			std::cout << "Dirty" << std::endl;
		else
			std::cout << "Clean" << std::endl;
	}
	std::cout << std::endl;

	// Vacuum status
	std::cout << "Vacuum status: " << std::endl;

	int currR = agt.getCurrRoom();
	std::cout << "Room: " << currR + 1 << std::endl;
	std::cout << "Action: ";

	int act = agt.getAction();
	if (act == 0)
	{
		std::cout << "Clean";
	}
	else 
	{
		std::cout << "Move";
	}

}

// Return a random value according to a normal distribution
bool randBool(std::mt19937* e1) 
{
	// Declare endpoints of the range for the distributions 
	int firs = 0;
	int last = 16;
	bool val = false;

	std::normal_distribution<> normal_dist(8, 4), min(firs), max(last);
	int res = normal_dist(*e1);
	if (res > 15) {
		val = true;
	}
	return val;
}