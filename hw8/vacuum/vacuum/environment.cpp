#include <iostream> 
#include <iomanip> 
#include <vector> 
#include <random> 
#include <cmath> 
#include <stdlib.h>

#include "environment.h"
#include "random.h"
#include "agent.h"

// Default constructor for Environment class
Environment::Environment(std::mt19937& e1)
{
	_e1 = nullptr;
	_e1 = &e1;
	for (int i = 0; i < 8; i++) {
		bool val = randBool(_e1);
		_rooms.push_back(val);
	}
};

// Clean the indicated room
void Environment::cleanRoom(int& roomIndex) {
	_rooms[roomIndex] = false;
}

// Perform one iteration by randomly creating dirty rooms
void Environment::iteration() {
	for (int i = 0; i < 8; i++) {
		if (_rooms[i] == false) {
			_rooms[i] = randBool(_e1);
		}
	}
}

// Returns the state of the indicated room
bool Environment::getRoom(int& roomIndex) {
	return _rooms[roomIndex];
}