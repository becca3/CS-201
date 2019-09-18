/**
Program: rice.cpp
Author: Rebecca Morgan
Date:  September 2019
Description: program for CS-201
*/

#include <iostream> 

int main(int argc, char** argv)
{
	int total_grains = 0;
	int grains = 1;
	int squares = 2;

	std::cout << "Square = " << "1" << "\n";
	std::cout << "Grains = " << "1" << "\n";
	std::cout << "\n";

	for (squares; squares <= 64; squares++)
	{
		//int grains = 1;
		total_grains = total_grains + grains;
		grains = (grains * 2);
		//std::cout << "---" << grains << "\n";
		std::cout << "Square = " << squares << "\n";
		std::cout << "Grains = " << grains << "\n";
		std::cout << "\n";

		//grains = grains * 2;
	}
	std::cout << "\n";
	std::cout << grains;
	return 0;
}

