#include <iostream>
#include <string>

int main(int argc, char** argv)
{
	std::string word;
	char c;

	while (true)
	{ 
		std::cout << "Enter a word: ";
		std::cin >> word;

		for (int x = 0; x < word.length(); x++)
		{
			if (word[x] >= 'a' && word[x] <= 'z')
			{
				std::cout << "Letters are: " << word[x] << "\n";
			}
		}
		std::cout << "\n";
	}
}