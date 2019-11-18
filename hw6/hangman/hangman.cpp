#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <iterator>

std::string guess; //Stores user input.
std::map<int, std::string> guesses; //Store users guesses and lives remaining. 
std::vector<std::string> words{ "d", "i", "n", "o", "s", "a", "u", "r" }; //Stores the actual word.
int life = 0; //Stores number of chances left.
std::string correctWord = "";

//Function definitions.
void printGuess(std::vector<std::string> words);
bool findLetter(std::string guess);
//void printEmpty(std::vector<std::string> blank);
//void replace(std::string guess);

//Main.
int main(int argc, char** argv)
{
	while (correctWord != "dinosaur" && life <= 10) //Asks for user input.
	{
		std::cout << "Guess a letter: " << "\n";
		std::getline(std::cin, guess);
		life++;
		guesses.insert(std::pair<int, std::string>(life, guess));
		if (std::find(words.begin(), words.end(), guess) != words.end())
		{
			correctWord.append(guess);
			std::cout << "Word so far: " << correctWord << "\n";
		}

		//Outputs letters guessed so far and lives used.
		std::cout << "Guesses so far: \n";
		std::map<int, std::string>::iterator it = guesses.begin();
		for (it = guesses.begin(); it != guesses.end(); ++it)
			std::cout << "Lives used: " << it->first << " - " << "Letters guessed: " << it->second << '\n';

		//If word not correct and lives finished then user fails.
		if (life == 10 && correctWord != "dinosaur")
		{
			std::cout << "\n";
			std::cout << "You died!" << std::endl;
			std::cout << "Word was... " << std::endl;
			printGuess(words);
			break;
		}
		else //If lives are not finished then run function.
		{
			findLetter(guess);
			//replace(guess);
		}

		//If user guesses word correctly then they win.
		if (correctWord == "dinosaur")
		{
			std::cout << "You win!" << std::endl;
		}
	}
	return 0;
}


//Prints the word if the user fails. 
void printGuess(std::vector<std::string> words) 
{
	// Lambda expression to print vector containing the word.
	for_each (words.begin(), words.end(), [](std::string i)
		{
			std::cout << i << " ";
		});
	std::cout << std::endl;
}


//Checks the letter entered by user, if it's there it tells the user it is. If not, 
//it tells the user the letter is not in the word. 
bool findLetter(std::string guess)
{
	auto result1 = std::find(std::begin(words), std::end(words), guess);

	if (result1 != std::end(words))
	{
		std::cout << "Word contains: " << guess << '\n';
		return true;
	}
	else
	{
		std::cout << "Word does not contain: " << guess << '\n';
		return false;
	}
}
