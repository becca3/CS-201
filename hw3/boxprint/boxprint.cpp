#include <iostream>
#include <string>
#include "boxer.hpp"

int main(int argc, char** argv)
{
	std::string text;
	int number;
	std::cout << "Please enter a message: ";
	std::cin >> text;
	std::cout << "Please enter a number: ";
	std::cin >> number;
	std::cout << "\n";

	box(text, number);
	return 0;
}



