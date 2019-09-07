/**
Program: Mileskm
Author: Rebecca Morgan
Date: 06 September 2019
Description: Miles to km converter program for CS-201
*/

#include <iostream> 

int main(int argc, char** argv)
{
	//Stored below two variables as floating points numbers so the calculation will be more accurate 
	float input = 0;
	float result = 0;

	std::cout << "Enter number of miles you'd like to convert into kilometres: \n";
	std::cin >> input; //User input saved in "input" variable 

	result = input * 1.609; //Calculation of miles to km 

	std::cout << "Miles = " << result;

	return 0;
}
