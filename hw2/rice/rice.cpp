/**
Program: rice.cpp
Author: Rebecca Morgan
Date: 18 September 2019
Description: Calculating numbers of grains of rice program for CS-201
*/

#include <iostream> 

int main(int argc, char** argv)
{
	int grains = 1;
	int squares = 2;
	int thousand = 0;
	int million = 0;
	int billion = 0;

	std::cout << "Square = " << "1" << "\n";
	std::cout << "Grains = " << "1" << "\n";
	std::cout << "\n";

	for (squares; squares <= 64; squares++)
	{
		grains = (grains * 2);
		std::cout << "Square = " << squares << "\n";
		std::cout << "Grains = " << grains << "\n";
		std::cout << "\n";

	if (grains == 1024)
	{
		thousand = squares;
	}
	if (grains == 1048576)
	{
		million = squares;
	}
	if (grains == 1073741824)
	{
		billion = squares;
	}
	}

	std::cout << "Squares for 1000 (thousand) grains = " << thousand << "\n";
	std::cout << "\n";
	std::cout << "Squares for 1,000,000 (million) grains = " << million << "\n";
	std::cout << "\n";
	std::cout << "Squares for 1,000,000,000 (billion) grains = " << billion << "\n";
	std::cout << "\n";
	std::cout << "Largest number of squares to calculate exact grains using int = " << "31 (1,073,741,824 grains)" << "\n";
	std::cout << "\n";
	std::cout << "Largest number of squares to calculate exact grains using double = " << "64 (9.22337e+18 grains)" << "\n";
	std::cout << "\n";
	return 0;
}

