
#ifndef AGENT_HPP
#define AGENT_HPP

#include "environment.h"

class Agent
{
	int desired_temp;
public:

	Agent(int pInt);

	//Returns previous temperature.
	int perceive(const Enviornment& pEnv);

	//Turns heater on or off.
	bool think(const Enviornment& pEnv);

	//Assigns new temperature. 
	void setDesiredTemp(int pInt);

	//Turns the heater on or off.
	void act(Enviornment& pEnv);
};

#endif