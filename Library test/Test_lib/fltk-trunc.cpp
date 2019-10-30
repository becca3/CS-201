#include<FL/Fl.h>
#include<FL/Fl_Box.h>
#include<FL/Fl_Window.h>
#include "truncstruct.hpp"

int main()
{
	Fl_Window window(200, 200, "Window title");
	Fl_Box box(0, 0, 200, 200, "Hey, Hello, World!");
	Fl_Box box2(2, 20, 100, 100, "New button");
	window.show();
	return Fl::run();
}

//include and library directories - add lib and include folders  