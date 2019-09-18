/*
Program: Lab 006
Author: Rebecca Morgan
Date: 16 September 2019
Description: String function program for CS-201 Lab 006
*/

#include <iostream>
#include <string>

void word(const std::string & input) 
{
	std::cout << input << std::endl;
	std::cout << "Size of word = " << input.size() << "\n";
}

int main(int argc, char **argv)
{
	word("Larry");
	word("Ruby");
	word("Alfie");
	return 0;
}