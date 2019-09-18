/**
Program: names.cpp
Author: Rebecca Morgan 
Date:
Description: Function that prints 10 names 	
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void InputNames()
{
	std::vector<std::string> names;
	for (int i = 0; i < 10; i++)
	{
		std::string name;
		std::cout << "Please enter a name ";
		std::getline(std::cin, name);
		names.push_back(name);
	}
}

int main(int argc, char** argv)
{
	InputNames();
	return 0;
}