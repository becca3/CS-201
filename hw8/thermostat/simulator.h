#include "agent.h"
#include "environment.h"

#include <string>
using std::string;

class Simulator
{
	bool loop = true;

public:
	string getInput();
	void askOwner(Agent& pAg, Enviornment& pEnv);
	void run(Agent& pAg, Enviornment& pEnv);
};