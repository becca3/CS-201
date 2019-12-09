#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <random>
#include <cmath>
#include <stdlib.h> 

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::mt19937;

class Environment {

private:

	// Member Variables 
	vector<bool> _rooms;
	mt19937* _e1;

public:

	// Constructors
	Environment(mt19937& e1);

	// Member Functions
	void cleanRoom(int& roomIndex);
	void iteration();
	bool getRoom(int& roomIndex);

};

#endif
