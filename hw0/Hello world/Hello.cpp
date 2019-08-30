/**
Program: Hello world
Author: Rebecca Morgan
Date: 30 August 2019
Description: Hello world program for CS-201
*/

#include <iostream>

int main(int argc, char** argv)
{
	int num = 0;
		while (num < 5) //This while loop prints "Hello world" while the num is less than 5 - once num reaches 5 the loop ends.
		{
			std::cout << "Hello world\n";
			num++; //This will increment each time the loop runs till the num variable is no longer less than 5 
	    }
	return 0; 
}