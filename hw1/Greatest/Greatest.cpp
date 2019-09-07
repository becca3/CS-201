/**
Program: Greatest
Author: Rebecca Morgan
Date: 06 September 2019
Description: Printing greatest number entered program for CS-201
*/

#include <iostream>

int main(int argc, char** argv)
{
	int input = 1; //Variable for the user to enter their number 
	int largest = 1; //Initialise the variable for user 

	std::cout << "Enter positive integers. Once finished, enter 0 and I'll print the largest positive integer entered.\n";
	std::cout << "\n";

	while (input > 0) //While input greater than 0, program asks user for another integer 
	{
		std::cout << "Enter an integer: \n";
		std::cin >> input;

		if (input > largest) //Largest variable stores the largest number entered by user 
		{
			largest = input; 
		}
	}
	if (input <= 0) //If input by user is 0 or less than 0 the program ends 
	{
		std::cout << "Number entered is either not positive or 0";
		std::cout << "\n";
	}
	std::cout << "The largest number is: " << largest << std::endl; //Tells the user what the largest number entered was
	return 0;
}