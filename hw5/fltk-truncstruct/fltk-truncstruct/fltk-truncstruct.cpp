//#include<FL/Fl.h>
//#include<FL/Fl_Box.h>
//#include<FL/Fl_Window.h>
//#include<FL/Fl_Input.h>
//#include<FL/Fl_Output.h>
//#include<FL/Fl_Button.h>
//#include<FL/Fl_Return_Button.h>
//#include "truncstruct.h"
//#include <string>
//#include <iostream>
//
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
//
//Screen screen;
//View view;
//
//void InputChanged(Fl_Widget* w, void* userdata);
//void buttonPressed(Fl_Widget* w, void* data);
//void Quit(Fl_Widget* w, void* userdata);
//Fl_Window* CreateWindow();
//
//
//void InputChanged(Fl_Widget* w, void* userdata)
//{
//	if (!view.input) return;
//	screen.input = view.input->value();
//}
//
//
//StringInfo foo;
//Fl_Output* output = nullptr;
//
//void buttonPressed(Fl_Widget* w, void* data)
//{
//	if (!view.output)
//	{
//		std::cout << "NULL" << std::endl;
//		return;
//	}
//	else
//	{
//		view.output->value(trunc(foo).str.c_str());
//	}
//
//}
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
//Fl_Window* CreateWindow()
//{
//	Fl_Window* window = new Fl_Window(550, 450, "Truncate Words Program");
//	Fl_Box* instructions = new Fl_Box(-10, -75, 200, 200, "Instructions: \n");
//	instructions->labelsize(20);
//	instructions->labelfont(FL_BOLD);
//
//	Fl_Box* words = new Fl_Box(30, -50, 200, 200, "Type a sentence and a number. \n");
//	Fl_Box* more_words = new Fl_Box(172, -30, 200, 200, "The program will print your sentence with the number of characters you input. \n");
//
//	const int x = 100;
//	int y = 120;
//	const int w = 100;
//	const int h = 25;
//	const int Spacing = 10;
//
//	view.input = new Fl_Input(x+20, y, 2 * w, h, "Input a word:");
//	y += h + Spacing;
//	view.input = new Fl_Input(x+20, y, 2 * w, h, "Input a number:");
//	y += h + Spacing;
//	view.output = new Fl_Output(x+20, y, 2 * w, h, "Output:");
//	y += h + Spacing;
//
//	Fl_Return_Button* Return = new Fl_Return_Button(x, y, w, h, "Truncate!");
//	y += h + Spacing;
//	Fl_Button* quitBtn = new Fl_Button(x, 260, w, h, "Quit");
//
//	// Callbacks
//	view.input->callback(InputChanged, nullptr);
//	Return->callback(buttonPressed, nullptr);
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
//	Fl_Window* window = CreateWindow();
//	window->show(argc, argv);
//	return Fl::run();
//}
//
//
//StringInfo trunc(const StringInfo& strInfo);

#include <iostream>
#include <string>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/fl_ask.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Value_Input.H>
#include "truncstruct.h"

const int x = 100;
int y = 120;
const int w = 100;
const int h = 25;
const int Spacing = 10;

Fl_Window* dialog = new Fl_Window(550, 450, "Truncate Words Program");
Fl_Box* instructions = new Fl_Box(-10, -75, 200, 200, "Instructions: \n");
Fl_Box* words = new Fl_Box(30, -50, 200, 200, "Type a sentence and a number. \n");
Fl_Box* more_words = new Fl_Box(172, -30, 200, 200, "The program will print your sentence with the number of characters you input. \n");
Fl_Input* strInput = new Fl_Input(x + 20, y, 2 * w, h, "Input a word:");
Fl_Value_Input* digInput = new Fl_Value_Input(x + 20, y+30, 2 * w, h, "Input a number:");
Fl_Box* out = new Fl_Box(x + 20, y+70, 2 * w, h);
Fl_Box* output = new Fl_Box(x + 20, y + 55, 2 * w, h, "Output:");
Fl_Button* notfunctioning = new Fl_Button(x, 260, w, h, "Truncate");
Fl_Button* closeButton = new Fl_Button(x, 300, w, h, "Quit");

void close(Fl_Widget* widget, void*) {
	//if (fl_choice("Do you really want to exit?", "No", "Yes", 0) == 1) {
	((Fl_Window*)widget->top_window())->hide();
	//}
}

void callback(Fl_Widget* w, void*) {
	StringInfo stringInfo{ strInput->value(), (std::size_t) digInput->value() };
	StringInfo truncated = trunc(stringInfo);
	char* output = new char[truncated.str.length() + 1];
	truncated.str.copy(output, truncated.str.size() + 1);
	output[truncated.str.size()] = '\0';
	out->label(output);
}

int main() {
	Fl::scheme("gtk+");
	closeButton->callback(close);
	strInput->value("Text...");
	strInput->callback(callback);
	strInput->when(FL_WHEN_CHANGED);
	digInput->value(8);
	digInput->callback(callback);
	digInput->when(FL_WHEN_CHANGED);
	out->align(FL_ALIGN_WRAP);
	instructions->align(FL_ALIGN_WRAP);
	notfunctioning->callback(callback);
	dialog->end();
	dialog->show();
	Fl::run();
}