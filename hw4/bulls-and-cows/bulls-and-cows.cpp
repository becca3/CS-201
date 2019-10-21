/**
Program: bulls-and-cows.cpp
Author: Rebecca Morgan
Date: 20th October 2019
Description: Bulls and cows game for CS-201
*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main() 
{
	//List of all variables 
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

	//Begin game
	std::cout << "Welcome to the Bulls and Cows game!" << std::endl;
	while (run_game == true) {
		bull = 0;
		cow = 0;
		find_count = 0;
		calculate_cows = 0;

		//Random number generation begins
		value1 = rand() % 10;
		value2 = rand() % 10;
		value3 = rand() % 10;
		value4 = rand() % 10;
	
		std::stringstream ss;
		ss << value1 << value2 << value3 << value4;
		secret_number = ss.str();

		win = false;

		//Looking for number and place of number (index)
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

		//Asks user if they want to play again once they guess the correct number 
		std::cout << "Play again? (y/n)" << std::endl;
		std::cin >> again;
		run_game = (again == 'y') ? true : false;
	}
	//User says no then the game ends 
	std::cout << "Thanks for playing!" << std::endl;
	return 0;
}
