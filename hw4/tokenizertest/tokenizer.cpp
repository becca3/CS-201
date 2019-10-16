/**
Program: tokenizer.cpp
Author: Rebecca Morgan
Date: 13 October 2019
Description: Identifying tokens for CS-201
*/

#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
#include<iterator>
#include "tokenizer.hpp"

bool ReadLine(std::string& str)
{
	std::string token;
	for (int i = 1; i <= token.size(); i++)
	{
		if (std::cout << token[i])
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return 0;
}

unsigned StringToTokensWS(std::vector<std::string>& tokens)
{
	std::string sentence;
	for (int i = 0; i <= tokens.size(); i++)
	{
		std::cout << tokens[i];
		std::cout << "Number of tokens in vector: " << tokens[i];
		return tokens.size();
	}
	return 0;
}