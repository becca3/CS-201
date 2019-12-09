#ifndef RANDOM_H
#define RANDOM_H 

#include <iostream>
#include <iomanip>
#include <random>
#include <cmath>
#include <stdlib.h>

class Environment;
class Agent;

void clearConsole();
void waitForContinue();
void printState(Environment& env, Agent& agt);
bool randBool(std::mt19937* e1);

#endif