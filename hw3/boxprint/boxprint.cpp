#include <iostream>
#include <string>
#include "boxer.hpp"

int main(int argc, char** argv)
{
	int rows = 0;
	int col = 0;
	int num = 0;
	std::string word;
	void box(std::string word, int num);
	{
		std::cout << "Enter a word: ";
		std::cin >> word;
		std::cout << "Enter the size of square: ";
		std::cin >> num;

		while (col < num)
		{
			std::cout << "\n";
			col++;
			rows = 0;

			while (rows < num)
			{
				if (rows == num)
				{
					std::cout << " " << word << " ";
				}
				std::cout << "*";
				rows++;
			}
		}
		std::cout << " " << word << " ";
	}
}



