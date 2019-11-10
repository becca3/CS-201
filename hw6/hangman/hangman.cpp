#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int count = 0;
std::string guess;
std::vector<std::string> guesses;
std::string word = "dinosaur";


int main(int argc, char** argv)
{
	std::cout << "Guess a letter: " << "\n";
	std::cin >> guess;
	guesses.push_back(guess);

	for (char& guess : word)
	{
		std::cout << guess;
	}

	/*for (int i = 0; i < word.size(); i++)
	{
		std::cout << word[i];
	}*/


	return 0;
}