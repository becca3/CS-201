/*
Program: tokenizer.cpp
Author: Rebecca Morgan
Date: 13 October 2019
Description: Identifying tokens for CS-201
*/

#include "tokenizer.hpp"

bool ReadLine(std::string & str)
{
	std::getline(std::cin, str);

	if (str != "")
	{
		//std::cout << "String not empty!" << "\n";
		return true;
	}
	else
	{
		//std::cout << "String empty!" << "\n";
		return false;
	}
}

unsigned StringToTokensWS(const std::string& input, std::vector<std::string>& tokens)
{
	std::string line;
	
	while (ReadLine(line))
	{
		std::istringstream instream(line);
		std::string intermediate;

		while (std::getline(instream, intermediate, ' '))
		{
			tokens.push_back(intermediate);
		}
		for (int i = 0; i < tokens.size(); i++)
		{
			std::cout << tokens[i] << "\n";
			std::cout << tokens.size(); 
		}
	}
	return 0;
}