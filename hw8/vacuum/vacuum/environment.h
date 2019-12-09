#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <random>
#include <cmath>
#include <stdlib.h> 

class Environment 
{

private:

	std::vector<bool> _rooms;
	std::mt19937* _e1;

public:

	Environment(std::mt19937& e1);

	void cleanRoom(int& roomIndex);
	void iteration();
	bool getRoom(int& roomIndex);

};

#endif
