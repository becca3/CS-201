/**
Program: Hello world
Author: Rebecca Morgan
Date: 30 August 2019
Description: Hello world program for CS-201
*/

#include <iostream>
int main(int argc, char** argv)
{
	std::cout << "Hello World!\n" << std::endl;
	int a = 37;
	int b = 53;
	int c = a * b;

	std::cout << "c = " << a << " * " << b << " = " <<  c << std::endl;
	return 0;
}