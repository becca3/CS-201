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

bool DoesNameExist(const std::string& nameToFind, const std::vector<std::string>& names)
{
	for (int x = 0; x <InputNames.size(); x++)
	{
		std::string mine;
		//std::vector<std::string>::iterator it = std::find(names.begin(), names.end(), 10);
	}
}

int main(int argc, char** argv)
{
	std::vector<std::string> name;
	InputNames(name);
	const std::string mine, const std::vector<std::string>& names;
	DoesNameExist(mine, name);
	return 0;
}