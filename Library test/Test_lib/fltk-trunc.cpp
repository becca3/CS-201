#include<FL/Fl.h>
#include<FL/Fl_Box.h>
#include<FL/Fl_Window.h>
#include<FL/Fl_Input.h>
#include "truncstruct.hpp"


int main()
{
	Fl_Window window(600, 400, "Window title");
	Fl_Box box(-10, -75, 200, 200, "Instructions: \n");
	Fl_Box box2(90, -50, 200, 200, "Type a sentence. The program will print the results.");
	Fl_Input *inp = new Fl_Input(30, 75, 200, 60);
	inp -> value("Enter your sentence: ");

	box.labelsize(20);
	box.labelfont(FL_BOLD);

	window.show();
	return Fl::run();
}

//Fl_Widget(x, y, width, height, label)  