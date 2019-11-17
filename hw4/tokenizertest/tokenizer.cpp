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

	if (str != "") //Return true if the string entered was not empty 
	{
		//std::cout << "String not empty!" << "\n";
		return true;
	}
	else //Return false if the string entered was empty 
	{
		//std::cout << "String empty!" << "\n";
		return false;
	}
}

unsigned StringToTokensWS(const std::string& input, std::vector<std::string>& tokens)
{
	std::string line;
	
	//while (ReadLine(line))
	{
		std::istringstream instream(input);

		while (instream)
		{
			std::string intermediate;
			instream >> intermediate;
			tokens.push_back(intermediate);
		}
	}
	return 0;
}

void AnalyseTokens(const std::vector<std::string>& tokens)
{
	for (int i = 0; i < tokens.size(); i++)
	{
		std::cout << i << "\n";	
		std::cout << tokens[i] << "\n";
	} 
}