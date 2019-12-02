/**
Program: fltk-bulls-and-cows.cpp
Author: Rebecca Morgan
Date: 01 November 2019
Description: fltk bulls and cows game for CS-201
*/

//#include<FL/Fl.h>
//#include<FL/Fl_Box.h>
//#include<FL/Fl_Window.h>
//#include<FL/Fl_Input.h>
//#include<FL/Fl_Output.h>
//#include<FL/Fl_Button.h>
//#include<FL/Fl_Return_Button.h>
//#include "bulls-and-cows.h"
//
//#include <iostream>
//#include <string>
//#include <sstream>
//#include <vector>
//
//int bull;
//int cow;
//int find_count;
//int value1;
//int value2;
//int value3;
//int value4;
//int calculate_cows;
//std::string secret_number = " ";
//std::string guess = " ";
//bool run_game = true;
//char again;
//bool win;
//
//struct Screen
//{
//	std::string input;
//};
//
//
//struct View
//{
//	Fl_Input* input = nullptr;
//	Fl_Output* output = nullptr;
//};
//
//Screen screen;
//View view;
//
//void InputChanged(Fl_Widget* w, void* userdata);
////void buttonPressed(Fl_Widget* w, void* data);
//void Quit(Fl_Widget* w, void* userdata);
//Fl_Window* CreateWindow();
//
////void InputChanged(Fl_Widget* w, void* userdata)
////{
////	if (!view.input) return;
////	screen.input = view.input->value();
////}
//
//
////void buttonPressed(Fl_Widget* w, void* data)
////{
////	if (!view.output)
////	{
////		std::cout << "NULL" << std::endl;
////		return;
////	}
////	else
////	{
////		std::string str= view.input->value();
////		view.output->value(str.c_str());
////	}
////}
//
//
//void Quit(Fl_Widget* w, void* userdata)
//{
//	if (!userdata) return;
//
//	Fl_Window* window = (Fl_Window*)userdata;
//
//	window->hide();
//}
//
//
//void Bulls(Fl_Widget* w, void* data)
//{
//	for (int i = 0; i < secret_number.length(); i++)
//	{
//		if (guess.at(i) == secret_number.at(i))
//		{
//			std::string i = view.input->value();
//			view.output->value(guess.c_str());
//		}
//	}
//}
//
//Fl_Window* CreateWindow()
//{
//	Fl_Window* window = new Fl_Window(550, 450, "Bulls and cows program");
//	Fl_Box* instructions = new Fl_Box(-10, -75, 200, 200, "Instructions: \n");
//	instructions->labelsize(20);
//	instructions->labelfont(FL_BOLD);
//
//	Fl_Box* text = new Fl_Box(7, -50, 200, 200, "Input a number(4 digits): \n");
//
//	Fl_Box* words = new Fl_Box(30, 0, 200, 200, "Guess a number! \n");
//
//	const int x = 100;
//	int y = 120;
//	const int w = 100;
//	const int h = 25;
//	const int Spacing = 10;
//
//	view.input = new Fl_Input(x, y, 2 * w, h, "Input:");
//	y += h + Spacing;
//	view.output = new Fl_Output(x, y, 2 * w, h, "Bulls:");
//	y += h + Spacing;
//	view.output = new Fl_Output(x, y, 2 * w, h, "Cows:");
//	y += h + Spacing;
//	y += h + Spacing;
//
//	Fl_Return_Button* Return = new Fl_Return_Button(x, 255, w, h, "Guess!");
//	y += h + Spacing;
//	Fl_Button* quitBtn = new Fl_Button(x, y, w, h, "Quit");
//
//	// Callbacks
//	//view.input->callback(InputChanged, nullptr);
//	//Return->callback(buttonPressed, nullptr);
//	Return->callback(Bulls, nullptr);
//	quitBtn->callback(Quit, (void*)window);
//
//
//	window->end();
//	return window;
//}
//
//
//int main(int argc, char** argv) 
//{
//
//	Fl_Window* window = CreateWindow();
//	window->show(argc, argv);
//	return Fl::run();
//
//
//	//List of all variables 
//	int bull;
//	int cow;
//	int find_count;
//	int value1;
//	int value2;
//	int value3;
//	int value4;
//	int calculate_cows;
//	std::string secret_number = " ";
//	std::string guess = " ";
//	bool run_game = true;
//	char again;
//	bool win;
//
//	//Begin game
//	std::cout << "Welcome to the Bulls and Cows game!" << std::endl;
//	while (run_game == true) {
//		bull = 0;
//		cow = 0;
//		find_count = 0;
//		calculate_cows = 0;
//
//		//Random number generation begins
//		value1 = rand() % 10;
//		value2 = rand() % 10;
//		value3 = rand() % 10;
//		value4 = rand() % 10;
//	
//		std::stringstream ss;
//		ss << value1 << value2 << value3 << value4;
//		secret_number = ss.str();
//
//		win = false;
//
//		//Looking for number and place of number (index)
//		while (win == false) {
//			std::cout << "Make a guess: (XXXX)" << std::endl;
//			std::cin >> guess;
//
//			for (int i = 0; i < secret_number.length(); i++) {
//				if (guess.at(i) == secret_number.at(i)) {
//					bull++;
//				}
//			}
//
//			for (int i = 0; i < guess.length(); i++) {
//				int secret = secret_number.at(i);
//				if (guess.find(secret)) {
//					find_count++;
//				}
//			}
//
//			calculate_cows = find_count - bull;
//			cow = (calculate_cows < 0) ? 0 : calculate_cows;
//
//			std::cout << "Bulls: " << bull << std::endl << "Cows: " << cow << std::endl;
//			if (bull == 4) {
//				std::cout << "You win!" << std::endl;
//				win = true;
//			}
//			else {
//				bull = 0;
//				cow = 0;
//				find_count = 0;
//			}
//		}
//
//		//Asks user if they want to play again once they guess the correct number 
//		std::cout << "Play again? (y/n)" << std::endl;
//		std::cin >> again;
//		run_game = (again == 'y') ? true : false;
//	}
//	//User says no then the game ends 
//	std::cout << "Thanks for playing!" << std::endl;
//	return 0;
//}


#include <iostream>
#include <string>
#include <stdlib.h>

#include <FL/Fl.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Window.H>

using std::string;

bool stringInlcudes(string& str, char& search) {
	for (size_t i = 0; i < str.size(); i++) {
		if (str[i] == search) {
			return true;
		}
	}
	return false;
}

struct Model {
	string input;
	string target;
};

struct View {
	Fl_Input* guessInput = nullptr;
	Fl_Box* guessResult = nullptr;
};

Model model;
View view;

void callback(Fl_Widget* w, void*) {
	model.input = view.guessInput->value();
	int cows = 0;
	int bulls = 0;
	for (size_t i = 0; i < model.target.size(); i++) {
		if (model.target[i] == model.input[i]) {
			bulls++;
		}
		else if (stringInlcudes(model.input, model.target[i])) {
			cows++;
		}
	}
	if (bulls == 4) {
		view.guessResult->label("You guessed correct!");
	}
	else {
		string result = std::to_string(bulls) + " bulls and " + std::to_string(cows) + " cows.";
		char* output = new char[result.length() + 1];
		result.copy(output, result.size() + 1);
		output[result.size()] = '\0';
		view.guessResult->label(output);
	}
}

void init() {
	const int elementHeight = 20;
	const int elementGap = 5;
	int y = elementGap;
	int width = 300 - elementGap * 2;

	srand(time(nullptr));
	while (model.target.size() < 4) {
		char randNum = std::to_string(rand() % 10)[0];
		if (!stringInlcudes(model.target, randNum)) {
			model.target += randNum;
		}
	}
	std::cout << model.target << std::endl;

	view.guessInput = new Fl_Input(elementGap, y, width, elementHeight);
	view.guessInput->when(FL_WHEN_ENTER_KEY);
	view.guessInput->callback(callback);
	y += elementHeight + elementGap;

	Fl_Button* check = new Fl_Button(elementGap, y, width, elementHeight, "Check");
	check->callback(callback);
	y += elementHeight + elementGap;

	view.guessResult = new Fl_Box(elementGap, y, width, elementHeight, "Waiting for input.");
	y += elementHeight + elementGap;

	Fl_Box* instructions = new Fl_Box(elementGap, y, width, elementHeight * 2, "Enter a guess in the text box, and press check. Results will be displayed above.");
	instructions->align(FL_ALIGN_WRAP);
	y += elementHeight * 2 + elementGap;
}

int main() {
	Fl_Window* win = new Fl_Window(300, 125, "Bulls and Cows");
	init();
	win->end();
	win->show();
	Fl::run();
}
