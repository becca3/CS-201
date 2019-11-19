/*
Program: tokenizer.cpp
Author: Rebecca Morgan
Date: 18 November 2019
Description: Identifying tokens for CS-201
*/

#include "tokenizer.hpp"

bool ReadLine(std::string & str) 
{
	std::getline(std::cin, str);

	if (str != "") //Return true if the string entered was not empty.
	{
		return true;
	}
	else //Return false if the string entered was empty. 
	{
		return false;
	}
}

unsigned StringToTokensWS(const std::string& input, 
	std::vector<std::string>& tokens)
{
	std::string line;

	std::istringstream instream(input);

	while (instream)
	{
		std::string intermediate;
		instream >> intermediate;
		tokens.push_back(intermediate);
	}
	return 0;
}

void AnalyzeTokens(const std::vector<std::string>& tokens)
{

	// Vector of vectors that contains all values possible.
	std::vector<char> integers{ '0', '1', '2', '3', '4', '5', '6', '7', 
		'8', '9' };

	std::vector<char> identifier{ '0', '1', '2', '3', '4', '5', '6', '7',
		'8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I','J', 'K', 
		'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z', '_' };

	std::vector<char> other{ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
		'a', 'b', 'c','d', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 
		'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B',
		'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
		'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '_', '+','-', '*', 
		'/', '=', '%' };
	std::vector<std::vector<char> > vv{ integers, identifier, other };

	// List of names of the potential types.
	std::vector<std::string> potTypes{ "integer", "identifier", "other" };

	// Find length for a token.
	size_t longest_length = 0;
	for (auto token : tokens) 
	{
		if (longest_length < token.length())
			longest_length = token.length();
	}

	// Check token type, print the type, along with the token value.
	for (auto token : tokens) 
	{
		std::string potType;

		bool res = false;

		// Check that for the token as a whitespace.
		if (!res) 
		{
			potType = "whitespace";
			Whitespace(token, potType, res, longest_length);
		}

		// Check if the token is a string.
		if (!res)
		{
			potType = "string";
			String(token, potType, res, longest_length);
		}

		// Check each remaining type with the Type() function.
		int i{ 0 };
		while (!res && i < 3) 
		{
			potType = potTypes.at(i);
			Type(token, potType, res, longest_length, vv.at(i));
			i++;
		}

		// No positive result = set "unknown" as type.
		if (!res) 
		{
			std::string unknown = "unknown";
			Print(token, longest_length, unknown);
		}

	}
}

int Type(std::string& token, std::string& potType, bool& res, 
	const size_t& longest_length, std::vector<char>& v) 
{
	size_t tokenLength = token.length();

	bool isType = true;

	size_t i{ 0 };
	while (i < tokenLength && isType == true) 
	{

		// If a char in token cannot match the vector of valid values, 
		//end loop set isType to false.
		if (find(v.begin(), v.end(), token.at(i)) == v.end()) 
		{
			isType = false;
		}
		++i;
	}

	// If the isType value true, set res to true, print the value of the type.
	if (isType) 
	{
		res = true;
		Print(token, longest_length, potType);
	}

	return 0;
}

// Check if provided token is only white space
void Whitespace(std::string& token, std::string& potType, bool& res, 
	const size_t& longest_length) 
{
	size_t tokenLength = token.length();

	if (!tokenLength || token == " ")
	{
		res = true;
		Print(token, longest_length, potType);
	}
}

// Check if the provided token is a string literal
void String(std::string& token, std::string& potType,
	bool& res,const size_t& longest_length) 
{
	bool isStringLiteral = false;

	size_t tokenLength = token.length();

	// If first + last tokens are quotation marks, isStringLiteral = true
	if ((token.at(0) == '"') && (token.at(tokenLength - 1) == '"')) 
	{
		isStringLiteral = true;
	}

	if (isStringLiteral) 
	{
		res = true;
		Escape(token, tokenLength);
		Print(token, longest_length, potType);
	}
}

void Escape(std::string& token, size_t& tokenLength) 
{
	token.insert(0, "\\");
	token.insert(tokenLength, "\\");
}

// Print a provided token to the screen, along with its type name
void Print(std::string& token, const size_t& longest_length, 
	std::string& potType)
{
	int necessary_width = 20 - potType.length();
	std::cout << "[" << potType << "]" << std::string(necessary_width, ' ') 
		<< '"' << token << '"' << std::endl;
}