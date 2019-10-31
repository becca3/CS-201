#include<FL/Fl.h>
#include<FL/Fl_Box.h>
#include<FL/Fl_Window.h>
#include<FL/Fl_Input.h>
#include <FL/Fl_Return_Button.h>

#include "truncstruct.hpp"


int main()
{
	Fl_Window window(600, 600, "Window title");
	Fl_Box instrucions(-10, -75, 200, 200, "Instructions: \n");
	instrucions.labelsize(20);
	instrucions.labelfont(FL_BOLD);

	Fl_Box words(30, -50, 200, 200, "Type a sentence and a number. \n");
	Fl_Box more_words(172, -30, 200, 200, "The program will print your sentence with the number of characters you input. \n");
	
	Fl_Input *string = new Fl_Input(30, 90, 200, 60);
	string -> value("Enter your sentence: ");
	
	Fl_Input *number = new Fl_Input(30, 160, 200, 60);
	number -> value("Enter a number: ");

	Fl_Box result(-35, 200, 200, 200, "Result is: ");

	window.show();
	return Fl::run();

	/*StringInfo trunc8(const std::string & str);
	StringInfo trunc(const StringInfo & strInfo);*/
}

//Fl_Widget(x, y, width, height, label)  