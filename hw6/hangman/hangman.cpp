#include <iostream>
#include <string>
#include <algorithm>
#include<map>


int count = 0;
std::string guess;
std::map<std::string, int> guesses;
std::string word = "dinosaur";


int main(int argc, char** argv)
{
	std::cout << "Guess a letter: " << "\n";
	std::cin >> guess;

	for (int i = 0; i <= 10; i++)
	{
		guesses.insert(std::pair<std::string, int>(guess, i));

		for (int c = 0; c <= word.length(); c++)
		{
			if (word[c] == guess)
			{

			}
		}
	}
	//	guesses.push_back(guess);
 
	return 0;
}