// truncstruct.cpp
// Glenn G. Chappell
// 19 Nov 2018
//
// For CS 201 Spring 2018
// Source for functions trunc8, trunc
// struct version
//
// Modified 10/24/18
// Chris Hartman
// For CS 201 Fall 2018

#include "truncstruct.hpp"
// For struct StringInfo definition
#include <string>
using std::string;
#include <cctype>
using std::toupper;

// trunc
// (See header for description.)
StringInfo trunc(const StringInfo & stringInfo) {
	// Get input string & maxlen
	string s = stringInfo.str;
	auto maxlen = stringInfo.len;
	if (maxlen < 0) {
		maxlen = 0;
	}
	// Truncate string & get its new length
	s = s.substr(0, maxlen);
	auto len = (s.size());
		
	// Convert string to upper-case
	for (std::size_t i = 0; i < len; ++i) {
		s[i] = char(toupper(s[i]));
	}
	// Create return value
	return StringInfo { s, len };
}

// trunc8
// (See header for description.)
StringInfo trunc8(const string & str) {
	return trunc(StringInfo { str, 8 });
}

// Truncate and capitalize a string according to provided user input of size
void truncArbitrary(Fl_Widget* obj, void*) {

	// Capture the current state of objects when the truncate button is clicked 
	Fl_Button* onButtonClick = (Fl_Button*)obj;

	// Capture the string the user would like to truncate
	Fl_Input* usrStr = (Fl_Input*)onButtonClick->parent()->child(1);

	// Capture the number of integers the user would like the final result truncated to
	Fl_Input* usrCount = (Fl_Input*)onButtonClick->parent()->child(3);

	// Declare variables for prepping call to truncArbitrary()
	size_t usrSize;
	string sendStr;
	string tempStr;

	// Set sendStr to the user's provided string
	sendStr = usrStr->value();

	// Set the tempStr to the string-value of integers the user would like to send
	tempStr = usrCount->value();

	// Use istringstream to convert the value to an integer
	istringstream instream(tempStr);
	instream >> usrSize;

	// Call the trunc() function provided by lab21 default
	StringInfo defaultOutput = trunc(StringInfo{ sendStr, usrSize });

	// Capture the child object that displays the final result (currently empty)
	Fl_Output* res = (Fl_Output*)onButtonClick->parent()->child(5);

	// Set the res variable from the window to the final string
	res->value(defaultOutput.str.c_str());
}
