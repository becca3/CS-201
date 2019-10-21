/*#include<iostream>
#include<vector>
#include<string>

void game();

int main(int argc, char** argv)
{
	std::string guess;
	std::cout << "Guess the number! Enter 4 digits: ";
	std::cin >> guess;

	void game();

	return 0;
}

void game()
{
	int guess = 0;
	std::vector<int> nums; //The answer 
	std::vector<int> player; //Players guess
	int bulls = 0;
	int cows = 0;
	int index = 0;

	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(7);
	nums.push_back(9);

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == guess)
		{
			std::cout << i;
		}
		else
		{
			std::cout << "Wrong";
		}
	}
}*/

#include <iostream>
#include <time.h>
#include <string>
#include <sstream>
#include <vector>

int main() {
	int bull;
	int cow;
	int find_count;
	int value1;
	int value2;
	int value3;
	int value4;
	int calculate_cows;
	std::string secret_number = " ";
	std::string guess = " ";
	bool run_game = true;
	char again;
	bool win;

	std::cout << "Welcome to the Bulls and Cows game!" << std::endl;
	while (run_game == true) {
		bull = 0;
		cow = 0;
		find_count = 0;
		calculate_cows = 0;

		//random number generation begins
		value1 = rand() % 10;
		value2 = rand() % 10;
		value3 = rand() % 10;
		value4 = rand() % 10;
	
		std::stringstream ss;
		ss << value1 << value2 << value3 << value4;
		secret_number = ss.str();

		win = false;
		std::cout << secret_number;


		while (win == false) {
			std::cout << "Make a guess: (XXXX)" << std::endl;
			std::cin >> guess;

			for (int i = 0; i < secret_number.length(); i++) {
				if (guess.at(i) == secret_number.at(i)) {
					bull++;
				}
			}

			for (int i = 0; i < guess.length(); i++) {
				int secret = secret_number.at(i);
				if (guess.find(secret)) {
					find_count++;
				}
			}

			calculate_cows = find_count - bull;
			cow = (calculate_cows < 0) ? 0 : calculate_cows;

			std::cout << "Bulls: " << bull << std::endl << "Cows: " << cow << std::endl;
			if (bull == 4) {
				std::cout << "You win!" << std::endl;
				win = true;
			}
			else {
				bull = 0;
				cow = 0;
				find_count = 0;
			}
		}

		std::cout << "Play again? (y/n)" << std::endl;
		std::cin >> again;
		run_game = (again == 'y') ? true : false;
	}
	std::cout << "Thanks for playing! :)" << std::endl;
	return 0;
}
