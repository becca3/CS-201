#include<FL/Fl.h>
#include<FL/Fl_Box.h>
#include<FL/Fl_Window.h>
#include<FL/Fl_Input.h>
#include "truncstruct.hpp"


int main()
{
	Fl_Window window(600, 600, "Window title");
	Fl_Box box(-10, -75, 200, 200, "Instructions: \n");
	Fl_Box box2(30, -50, 200, 200, "Type a sentence and a number. \n");
	Fl_Box box3(172, -30, 200, 200, "The program will print your sentence with the number of characters you input. \n");
	Fl_Input *string = new Fl_Input(30, 90, 200, 60);
	string -> value("Enter your sentence: ");
	Fl_Input *number = new Fl_Input(30, 160, 200, 60);
	number -> value("Enter a number: ");

	box.labelsize(20);
	box.labelfont(FL_BOLD);

	window.show();
	return Fl::run();
}

//Fl_Widget(x, y, width, height, label)  