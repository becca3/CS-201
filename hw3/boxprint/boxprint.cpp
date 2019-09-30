/**
Program: boxprint.cpp
Author: Rebecca Morgan
Date: 28 September 2019
Description: Program that prints a box of asterisks around a word for CS-201
*/
#include <iostream>
#include <string>
#include "boxer.hpp"

int main(int argc, char** argv)
{
	std::string text; //Stores user input
	int number; //Stores user input 
	std::cout << "Please enter a message: "; //Asks for user input 
	std::cin >> text;
	std::cout << "Please enter a number: "; //Asks for user input
	std::cin >> number;
	std::cout << "\n"; //New line

	box(text, number); //Calling function 
	return 0;
}



