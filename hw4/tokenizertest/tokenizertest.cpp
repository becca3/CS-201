/**
Program: tokenizertest.cpp
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


int main(int argc, char** argv)
{
	std::string line;
	while (true)
	{
		std::string line;
		std::cout << "Enter a sentence: ";
		std::getline(std::cin, line);
		std::cout << "Your sentence is: " << line;
		std::cout << "\n";

		if (line == "End" || line == "end" || line == "END")
		{
			break;
		}
	}

	ReadLine(line);
	std::cout << "\n";

	std::string input; std::vector<std::string> tokens;
	
	std::string sentence;
	std::cout << "Please help: ";
	std::getline(std::cin, sentence);
	std::istringstream iss(sentence);
	tokens.push_back(sentence);
	std::copy(std::istream_iterator<std::string>(iss),
		std::istream_iterator<std::string>(),
		std::ostream_iterator<std::string>(std::cout, "\n"));

	StringToTokensWS(line, tokens);
	std::cout << "\n";

	//bool ReadLine(std::string & str);
	//unsigned StringToTokensWS(std::vector<std::string> & tokens);
	return 0;
	
}