/**
Program: Game description
Author: Rebecca Morgan
Date: 30 August 2019
Description: Game description project for CS-201 hw0
*/

#include <iostream>
#include <string> //Added so I can use strings in the code

int main(int argc, char** argv)
{
	/**Defining a string variable using "std::string". 
	message is the variable name. */
	std::string message("Tomb Raider is an action-adventure based game.\n"
		"You can roam an open map world looking for treasures and artifacts.\n"
		"Defeating enemies such as knights, dinosaurs and wild animals \n"
		"(bears, tigers, panthers) is also part of the game.\n"
		"The main objective of the game is to achieve a particular goal. \n"
		"This usually relates to her dads' research on ancient tombs \n"
		"and relics.\n"
		"There have been many releases of this game, each with a \n"
		"different objective \n"
		"and each set in a completely different world. For example, \n"
		"some games are set in the jungle and some in the Croft \n"
		"manor (Lara Crofts' childhood home).\n");

	std::cout << message << std::endl;
	return 0;
}