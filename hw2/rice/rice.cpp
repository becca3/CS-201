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

	for (int squares = 1; squares <= 64; squares++)
	{
		int grains = 1;
		total_grains = total_grains + grains;
		std::cout << "Square = " << squares << "\n";
		std::cout << "Grains = " << total_grains << "\n";
		grains = grains * 2;
	}
	std::cout << total_grains;
	return 0;
}

