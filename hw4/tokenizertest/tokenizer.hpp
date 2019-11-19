/**
Program: tokenizer.hpp
Author: Rebecca Morgan
Date: 18 November 2019
Description: Identifying tokens for CS-201
*/

#include<iostream>
#include<string>
#include<vector>
#include<sstream>

bool ReadLine(std::string& str);
unsigned StringToTokensWS(const std::string& input, 
	std::vector<std::string>& tokens);
void AnalyzeTokens(const std::vector<std::string>& 
	tokens);
void Print(std::string& token, const size_t& 
	longest_length, std::string& potType);
void Escape(std::string& token, size_t& tokenLength);
void String(std::string& token, std::string& potType, 
	bool& res, const size_t& longest_length);
void Whitespace(std::string& token, std::string& potType, 
	bool& res, const size_t& longest_length);
int Type(std::string& token, std::string& potType, bool& res, 
	const size_t& longest_length, std::vector<char>& v);


//unsigned StringToTokenWS(std::vector<std::string>& tokens);