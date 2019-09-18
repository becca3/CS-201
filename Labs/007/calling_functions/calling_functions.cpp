/**
Program: calling_funtions.cpp
Author: Rebecca Morgan
Date: 18 September 2019
Description: Calling functions in a separate file program for CS-201
*/

#include "intio.cpp"
#include <iostream>

int main(int argc, char** argv)
{
	int x = getInt();
	int y = getInt();
	int z = getInt();

	putInt(x, 5);
	std::cout << "\n";
	putInt(y, 5);
	std::cout << "\n";
	putInt(z, 5);
	std::cout << "\n";
	return 0;
}

