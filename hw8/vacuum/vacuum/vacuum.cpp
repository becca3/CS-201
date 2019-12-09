#include <iostream> 
#include <iomanip>
#include <random>
#include <cmath>
#include <stdlib.h>

#include "environment.h"
#include "agent.h"
#include "simulator.h"
#include "random.h"

using std::cout;
using std::cin;
using std::endl;
using std::random_device;
using std::seed_seq;
using std::mt19937;

int main() {

	// Create pseudo-random device
	random_device r;
	seed_seq seedObj{ r(), r(), r(), r(), r(), r(), r(), r() };
	mt19937 e1(seedObj);

	// Inform user of the nature of the software 
	clearConsole();
	cout << "Welcome to the Vacuum Simulator" << endl;
	cout << "\nThe simulator will now create an environment" << endl;
	waitForContinue();

	// Create initial environment, iteration, and quit vars 
	clearConsole();
	Environment env(e1);
	Agent agt;
	Simulator sim;
	cout << "Environment created" << endl;
	waitForContinue();

	// Initiate while loop 
	while (true) {

		// Clear screen
		clearConsole();

		// Affect the environment
		env.iteration();

		// The agent performs its duties 
		agt.perceive(env);
		agt.think();
		agt.act(env);

		printState(env, agt);

		sim.askOwner();
	}

	return 0;
}
