#include <iostream>
#include <string>
#include <algorithm>
#include <map>

std::string guess;
std::map<std::string, int> guesses;
std::string word = "dinosaur";

//std::transform(word.begin(), word.end(), sln.begin(), [&](auto i) 
//	{
//		return word[i] == guess;
//	});


int main(int argc, char** argv)
{
	while (true)
	{
		int life = 0;
		if (life <= 10)
		{
			std::cout << "Guess a letter: " << "\n";
			std::getline(std::cin, guess);
		}
		else
		{
			std::cout << "You died!" << std::endl;
			break;
		}

		for (int i = 0; i <= 10; i++)
		{
			guesses.insert(std::pair<std::string, int>(guess, i));

			for (int c = 0; c <= word.length(); c++)
			{
				/*if (word[c] == guess)
				{

				}*/
			}
		}
		//	guesses.push_back(guess);
	}
	return 0;
}
