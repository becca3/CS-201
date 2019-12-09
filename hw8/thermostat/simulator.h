#include "agent.h"
#include "environment.h"
#include <string>

//Simulates the changing tempeature. 
class Simulator
{
	bool loop = true;

public:
	std::string getInput();
	void askOwner(Agent& pAg, Environment& pEnv);
	void run(Agent& pAg, Environment& pEnv);
};