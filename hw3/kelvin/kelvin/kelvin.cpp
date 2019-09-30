	/**
	Program: kelvin.cpp
	Author: Rebecca Morgan
	Date: 28 September 2019
	Description: Fixed broken kelvin program for CS-201
	*/

	#include <iostream>

	//Converts celsius to kelvin 

	float ctok(float c) //Should be float type 
	{
		float k = c + 273.15; //Should be float type 
		return k; //Trying to return the type rather than the actual value k.
	}

	int main(int argc, char** argv) //"int argc, char** argv" - missing from brackets. 
	{
		float c = 0; //Type should be float.
		std::cout << "Enter a temperature: "; //Ask user for input. 
		std::cin >> c; //Should be 'std::cin'. d is also not defined anywhere - should be c. 
		if (c < -293.15)
		{
			std::cout << "Number entered is not valid."; //Tells the user that the number entered is not valid
		}
		else //Else statement to do something if the number entered is valid 
		{	
			float k = ctok(c); //c should not be in quotation marks. Type should be float.
			std::cout << k << '/n'; //Again, should be 'std::cout' - std missing and 'c' in cout is capitalised. 
		}
	}