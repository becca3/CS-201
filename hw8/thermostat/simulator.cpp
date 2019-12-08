#include "simulator.h"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::getline;

#include <string>
using std::string;
using std::stoi;

#include <stdexcept>

string Simulator::getInput()
{
	string input = "";
	getline(cin, input);
	return input;
}