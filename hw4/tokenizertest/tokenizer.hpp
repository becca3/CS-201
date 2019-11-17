/**
Program: tokenizer.hpp
Author: Rebecca Morgan
Date: 13 October 2019
Description: Identifying tokens for CS-201
*/

#include<iostream>
#include<string>
#include<vector>
#include<sstream>

bool ReadLine(std::string& str);
unsigned StringToTokensWS(const std::string& input, std::vector<std::string>& tokens);
void AnalyseTokens(const std::vector<std::string>& tokens);

//unsigned StringToTokenWS(std::vector<std::string>& tokens);