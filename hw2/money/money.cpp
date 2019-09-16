/**
Program: money.cpp
Author: Rebecca Morgan
Date: September 2019
Description:  program for CS-201
*/

#include <iostream> 

int main(int argc, char** argv)
{
	//Variables listed 
	int pennies = 0;
	int nickles = 0;
	int acnick = 0;
	int dimes = 0;
	int acdime = 0;
	int quarters = 0;
	int acquar = 0;
	int dollars = 0;
	int acdol = 0;

	//Ask user for input 
	std::cout << "Enter the number of pennies you have: ";
	std::cin >> pennies;
	std::cout << "Enter the number of nickles you have: ";
	std::cin >> nickles;
	acnick = (nickles * 5); //Converts nickles into cents
	std::cout << "Enter the number of dimes you have: ";
	std::cin >> dimes;
	acdime = (dimes * 10); //Converts dimes into cents
	std::cout << "Enter the number of quarters you have: ";
	std::cin >> quarters;
	acquar = (quarters * 25); //Converts quarters into cents
	std::cout << "Enter the number of dollars you have: ";
	std::cin >> dollars; 
	acdol = (dollars * 100); //Converts dollars into cents

	//Convert the integer values into floating point types 
	float total = (pennies + acnick + acdime + acquar + acdol);
	float true_total = total / 100; //Coverts the cents into dollars and cents value 
	std::cout << "You have " << pennies << " penny/pennies" << "\n";
	std::cout << "You have " << nickles << " nickle/s" << "\n";
	std::cout << "You have " << dimes << " dime/s" << "\n";
	std::cout << "You have " << quarters << " quarter/s" << "\n";
	std::cout << "You have " << dollars << " dollar/s" << "\n";
	std::cout << "Your total is: " << "$" << true_total << " cent/s." << std::endl;
	return 0;
}