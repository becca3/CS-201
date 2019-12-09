#ifndef RANDOM_H
#define RANDOM_H 

#include <iostream>
#include <iomanip>
#include <random>
#include <cmath>
#include <stdlib.h>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::mt19937;

class Environment;
class Agent;

void clearConsole();
void waitForContinue();
void printState(Environment& env, Agent& agt);
bool rollBool(mt19937* e1);

#endif