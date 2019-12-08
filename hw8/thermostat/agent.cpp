#include "agent.h"

Agent::Agent(int pInt)
{
	desired_temp = pInt;
}

int Agent::perceive(const Enviornment& pEnv)
{
	return pEnv.getTemp();
}

bool Agent::think(const Enviornment& pEnv)
{
	int current_temp = perceive(pEnv);

	if (current_temp >= desired_temp) //Too hot.
		return false; //Heater off

	return true; //Too cold = heater on
}

void Agent::setDesiredTemp(int pInt)
{
	desired_temp = pInt;
}

void Agent::act(Enviornment& pEnv)
{
	pEnv.setHeaterState(think(pEnv));
}