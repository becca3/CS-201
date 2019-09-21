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

void InputNames(std::vector<std::string> & names)
{
	//std::vector<std::string> names;
	for (int i = 0; i < 10; i++)
	{
		std::string name;
		std::cout << "Please enter a name ";
		std::getline(std::cin, name);
		names.push_back(name);
	}
}

bool DoesNameExist(const std::string & nameToFind, const std::vector<std::string> & names)
{
	for (int x = 0; x <names.size(); x++)
	{
		bool found = true;
		if (x = found)	
		{
			break;
		}
	}
}

int main(int argc, char** argv)
{
	std::vector<std::string> name;
	InputNames(name);

	std::string names, std::vector<std::string> name;
	DoesNameExist(names, name);

	return 0;
}