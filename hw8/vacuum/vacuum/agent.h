#ifndef AGENT_H
#define AGENT_H

#include <iostream>
#include <iomanip>

class Environment;

class Agent
{

private:

	int _currRoom;
	int _nextAction;
	int _moveVal;
	bool _roomDirty;

public:

	Agent();

	void perceive(Environment& env);
	void think();
	void act(Environment& env);
	int getAction();
	int getCurrRoom();
};

#endif