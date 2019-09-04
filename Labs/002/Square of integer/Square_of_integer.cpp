/**
Program: Square of integer
Author: Rebecca Morgan
Date: 04 September 2019
Description: Square of the next integer typed by user.
*/

#include <iostream>
#include <cmath>

int main(int argc, char** argv)
{
	int integer;
	std::cout << "Type an integer: ";
	std::cin >> integer; 

	integer++;	

	integer = integer * integer;
	std::cout << integer;
	
}