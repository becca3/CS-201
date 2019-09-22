/**
Program: names.cpp
Author: Rebecca Morgan 
Date: 21 September 2019
Description: Functions and prototypes for CS-201 	
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void InputNames(std::vector<std::string>& names);
bool DoesNameExist(const std::string& nameToFind, const std::vector<std::string>& names);
void PrintNames(const std::vector<std::string> & names);

int main(int argc, char** argv)
{
	std::vector<std::string> names;
	InputNames(names);
	std::cout << "\n";

	std::string name;
	std::cout << "Please enter a name to find: ";
	std::cin >> name;
	std::cout << DoesNameExist(name, names);
	std::cout << "\n";

	PrintNames(names);
	std::cout << "\n";

	return 0;
}

void InputNames(std::vector<std::string> & names)
{
	for (int i = 0; i < 10; i++)
	{
		std::string name;
		std::cout << "Please enter a name ";
		std::getline(std::cin, name);
		names.push_back(name);
	}
}

bool DoesNameExist(const std::string& nameToFind, const std::vector<std::string>& names)
{
	for (int i = 0; i < names.size(); i++)
	{
		if (nameToFind == names[i])
		{
			return true;
			std::cout << "\n";
		}
	}
	return false;
}

void PrintNames(const std::vector<std::string>& names)
{
	for (int i = 0; i < names.size(); i++)
	{
		std::cout << names[i] << "\n";
	}
}