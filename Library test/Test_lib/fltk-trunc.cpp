/**
Program: fltk-trunc.cpp
Author: Rebecca Morgan
Date: 01 November 2019
Description: fltk Truncate program for CS-201
*/

#include<FL/Fl.H>
#include<FL/Fl_Box.H>
#include<FL/Fl_Window.H>
#include<FL/Fl_Input.H>
#include<FL/Fl_Output.H>
#include<FL/Fl_Button.H>
#include<FL/Fl_Return_Button.H>

#include "truncstruct.hpp"
#include <string>
#include <iostream>

int main(int argc, char** argv)
{
	#Fl_Window* window = CreateWindow();
	window->show(argc, argv);
	return Fl::run();
}


struct Screen
{
	std::string input;
};


struct View
{
	Fl_Input* input = nullptr;
	Fl_Output* output = nullptr;
};


Screen screen;
View view;

void InputChanged(Fl_Widget* w, void* userdata);
void buttonPressed(Fl_Widget* w, void* data);
void Quit(Fl_Widget* w, void* userdata);
Fl_Window* CreateWindow();


void InputChanged(Fl_Widget* w, void* userdata)
{
	if (!view.input) return;
	screen.input = view.input->value();
}


StringInfo foo;
Fl_Output* output = nullptr;

void buttonPressed(Fl_Widget* w, void* data)
{
	if (!view.output)
	{
		std::cout << "NULL" << std::endl;
		return;
	}
	else
	{
		view.output->value(trunc(foo).str.c_str());
	}

}

void Quit(Fl_Widget* w, void* userdata)
{
	if (!userdata) return;

	Fl_Window* window = (Fl_Window*)userdata;

	window->hide();
}


Fl_Window* CreateWindow()
{
	Fl_Window* window = new Fl_Window(550, 450, "Truncate Words Program");
	Fl_Box* instructions = new Fl_Box(-10, -75, 200, 200, "Instructions: \n");
	instructions->labelsize(20);
	instructions->labelfont(FL_BOLD);

	Fl_Box* words = new Fl_Box(30, -50, 200, 200, "Type a sentence and a number. \n");
	Fl_Box* more_words = new Fl_Box(172, -30, 200, 200, "The program will print your sentence with the number of characters you input. \n");

	const int x = 100;
	int y = 120;
	const int w = 100;
	const int h = 25;
	const int Spacing = 10;

	view.input = new Fl_Input(x, y, 2 * w, h, "Input a word:");
	y += h + Spacing;
	view.input = new Fl_Input(x, y, 2 * w, h, "Input a number:");
	y += h + Spacing;
	view.output = new Fl_Output(x, y, 2 * w, h, "Output:");
	y += h + Spacing;

	Fl_Return_Button* Return = new Fl_Return_Button(x, y, w, h, "Truncate!");
	y += h + Spacing;
	Fl_Button* quitBtn = new Fl_Button(x, 260, w, h, "Quit");

	// Callbacks
	//view.input->callback(InputChanged, nullptr);
	//Return->callback(buttonPressed, nullptr);
	truncArbitrary(Fl_Widget * obj, void*);
	quitBtn->callback(Quit, (void*)window);


	window->end();
	return window;
}