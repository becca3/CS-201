/**
Program: fltk-bulls-and-cows.cpp
Author: Rebecca Morgan
Date: 02 December 2019
Description: fltk bulls and cows game for CS-201
*/


#include "bulls-and-cows.h"
#include <random>

using std::vector;
using std::random_device;
using std::default_random_engine;
using std::uniform_int_distribution;

int compareDigits(const vector<int>& nums, const vector<int>& guess)
{
	int common = 0;

	for (int i = 0; i < 4; i++)
	{
		if (nums[i] == guess[i])
			common++;
	}

	return common;
}

void initVectors(vector<int>& nums, vector<int>& guess)
{
	random_device rDevice;

	//Choose a random int between 0 and 9.
	default_random_engine engine(rDevice());
	uniform_int_distribution<int> uniform_dist(0, 9);

	//Gives each number a spot in the vector.
	int randomInt;
	for (int i = 0; i < 4; i++)
	{
		randomInt = uniform_dist(engine);
		nums.push_back(randomInt);
		guess.push_back(0);
	}

	//Checks if two vectors are the same.
	while (compareDigits(nums, guess) == 4)
	{
		for (int i = 0; i < 4; i++)
		{
			randomInt = uniform_dist(engine);
			nums[i] = randomInt;
		}
	}
}