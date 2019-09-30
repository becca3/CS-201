/**
Program: boxprint.cpp
Author: Rebecca Morgan
Date: 28 September 2019
Description: Program that prints a box of asterisks around a word for CS-201
*/
#include <iostream>
#include <string>
#include "boxer.hpp" 

void box(std::string word, int num)
{
	std::string beginend(num, '*'); //Prints the ends of the box

	for (int i = 0; i < num; i++) //Loop to print the first bit of the box 
	{
		std::cout << beginend;

		for (int j = 0; j < word.length() + 2; j++) //Prints the top line before the line containing the word
		{
			std::cout << "*";
		}
		std::cout << beginend << "\n";
	}

	std::cout << beginend; //Print the end of the box 

	for (int i = 0; i < word.length() + 2; i++) //Prints the row below the word 
	{
		std::cout << " "; 
	}
	std::cout << beginend << "\n";
	std::cout << beginend;
	std::cout << " " << word << " " << beginend << "\n"; //Prints the word with spaces  
	std::cout << beginend; 
	for (int i = 0; i < word.length() + 2; i++)
	{
		std::cout << " "; //Prints spaces beside the word 
	}
	std::cout << beginend << "\n";

	for (int i = 0; i < num; i++) //Printing bottom of box 
	{
		std::cout << beginend;

		for (int j = 0; j < word.length() + 2; j++) //Printing last bit of box 
		{
			std::cout << "*";
		}
		std::cout << beginend << "\n";
	}

}