#include <iostream> 
#include <iomanip>
#include <random>
#include <cmath>
#include <stdlib.h>

#include "environment.h"
#include "agent.h"
#include "simulator.h"
#include "random.h"


int main() 
{
	// Pseudorandom device
	std::random_device r;
	std::seed_seq seedObj{ r(), r(), r(), r(), r(), r(), r(), r() };
	std::mt19937 e1(seedObj);

	clearConsole();
	std::cout << "This is vacuum simulator!" << std::endl;
	std::cout << "\nThe simulator is creating an environment!" << std::endl;
	waitForContinue();
 
	clearConsole();
	Environment env(e1);
	Agent agt;
	Simulator sim;
	std::cout << "Environment created!" << std::endl;
	waitForContinue();

	//Keeps user in simulator. 
	while (true)
	{
		clearConsole();

		//Change the environment.
		env.iteration();

		//Agent does it's thing.  
		agt.perceive(env);
		agt.think();
		agt.act(env);

		printState(env, agt);

		sim.askOwner();
	}

	return 0;
}
