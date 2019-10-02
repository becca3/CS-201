#include <iostream>
#include <vector>
#include <string>
#include "userInput.hpp"

void getUserStrings(std::vector<std::string>& words)
{
	std::string text;
	while (text != "end")
	{
		std::cout << "Enter words: ";
		std::cin >> text;
		words.push_back(text);
	}
}

void getUserStrings1(std::vector<std::string>& words)