#ifndef AGENT_H
#define AGENT_H

#include "environment.h"

//Agent to control temperature and status of heater. 
class Agent
{
	int desired_temp;

public:

	Agent(int pInt);

	//Returns previous temperature.
	int perceive(const Environment& pEnv);

	//Turns heater on or off.
	bool think(const Environment& pEnv);

	//Assigns new temperature. 
	void setDesiredTemp(int pInt);

	//Turns the heater on or off.
	void act(Environment& pEnv);
};

#endif