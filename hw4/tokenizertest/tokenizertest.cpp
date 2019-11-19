/*
Program: tokenizertest.cpp
Author: Rebecca Morgan
Date: 18 November 2019
Description: Identifying tokens for CS-201
*/

#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
#include<iterator>
#include "tokenizer.hpp"


int main(int argc, char** argv)
{
	std::vector<std::string> tokens;
	std::string line;
	std::string input = line;

	while (true)
	{
		std::string line;
		std::cout << "Enter a sentence: ";
		ReadLine(line);
		std::cout << "Your sentence is: " << line << "\n";

		if (line == "End" || line == "end" || line == "END")
		{
			std::cout << "Size of tokens = " << tokens.size() << "\n";
			return tokens.size();
			break;
		}
		else
		{
			StringToTokensWS(line, tokens);
			AnalyzeTokens(tokens);
		}
	}
}