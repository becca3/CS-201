#include "agent.h"

Agent::Agent(int pInt)
{
	desired_temp = pInt;
}

int Agent::perceive(const Environment& pEnv)
{
	return pEnv.getTemp();
}

bool Agent::think(const Environment& pEnv)
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

void Agent::act(Environment& pEnv)
{
	pEnv.setHeaterState(think(pEnv));
}