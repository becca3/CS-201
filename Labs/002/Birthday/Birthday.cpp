#include <iostream>

int main(int argc, char** argv)
{
	int month;
	std::cout << "Please enter your birth month e.g 03: ";
	std::cin >> month; 
	if (month > 12)
	{
		std::cout << "Month invalid. Try again ";
		std::cin >> month;
	}

	int day;
	std::cout << "Please enter the date you were born e.g. 09: ";
	std::cin >> day;
	if (day > 31)
	{
		std::cout << "Day invalid. Try again ";
		std::cin >> day;
	}

	int year;
	std::cout << "Please enter the year you were born e.g. 1994: ";
	std::cin >> year;

	std::cout << day << "/" << month << "/" << year; 
}