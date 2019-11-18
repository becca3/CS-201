#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include<iterator>

std::string guess;
std::map<int, std::string> guesses;
std::vector<std::string> guesses_vec;
std::vector<std::string> words{ "d", "i", "n", "o", "s", "a", "u", "r" };
int life = 0;

void printGuess(std::vector<std::string> words);
void findLetter(std::string guess);

int main(int argc, char** argv)
{
	while (life <= 10)
	{
		std::cout << "Guess a letter: " << "\n";
		std::getline(std::cin, guess);
		life++;
		guesses.insert(std::pair<int, std::string>(life, guess));
		guesses_vec.push_back(guess); //Stores guesses in a vector so a comparison search can be run.

		//Outputs letters guessed so far and lives used.
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
			findLetter(guess);
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

void findLetter(std::string guess)
{
	auto result1 = std::find(std::begin(words), std::end(words), guess);

	if (result1 != std::end(words)) 
	{
		std::cout << "Word contains: " << guess << '\n';
	}
	else 
	{
		std::cout << "Word does not contain: " << guess << '\n';
	}
}
