#include <iostream>
#include <sstream>
#include <string>
#include "string.hpp"

void string(std::string stringValue)
{
	float count = 0;

	std::istringstream val (stringValue);
	val >> count;

	std::cout << count << "\n";

	float count_2 = count * count;
	std::cout << count_2;
}