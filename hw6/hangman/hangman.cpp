#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>

std::string guess;
std::map<int, std::string> guesses;
std::vector<std::string> words{ "d", "i", "n", "o", "s", "a", "u", "r" };
//std::string word = "dinosaur";
int life = 0;

void printGuess(std::vector<std::string> words);

int main(int argc, char** argv)
{
	while (life <= 10)
	{
		std::cout << "Guess a letter: " << "\n";
		std::getline(std::cin, guess);
		life++;
		guesses.insert(std::pair<int, std::string>(life, guess));

		std::cout << "Guesses so far: \n";
		std::map<int, std::string>::iterator it = guesses.begin();
		for (it = guesses.begin(); it != guesses.end(); ++it)
			std::cout << "Lives used: " << it->first << " - " << "Letters guessed: " << it->second << '\n';

		if (life == 10)
		{
			std::cout << "\n";
			std::cout << "You died!" << std::endl;
			std::cout << "Word was... " << std::endl;
			printGuess(words);
			break;
		}
		else
		{
			//printGuess(words);
		}
	}
	return 0;
}


void printGuess(std::vector<std::string> words)
{
	// Lambda expression to print vector containing the word.
	for_each (words.begin(), words.end(), [](std::string i)
		{
			std::cout << i << " ";
		});
	std::cout << std::endl;
}

void findLetter()
{

	std::vector<int>::iterator it;
}
