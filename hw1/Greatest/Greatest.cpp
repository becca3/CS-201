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
	int largest = 1;

	std::cout << "Enter positive integers. Once finished, enter 0 and I'll print the largest positive integer entered.\n";
	std::cout << "\n";

	while (input > 0)
	{
		std::cout << "Enter an integer: \n";
		std::cin >> input;

		if (input > largest)
		{
			largest = input; 
		}
	}
	if (input <= 0)
	{
		std::cout << "Number entered is not positive";
		std::cout << "\n";
	}
	std::cout << "The largest number is: " << largest << std::endl;
	return 0;
}