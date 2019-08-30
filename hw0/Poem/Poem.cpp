/**
Program: Poem
Author: Rebecca Morgan
Date: 30 August 2019
Description: Poem printing project for CS-201 hw0
*/

#include <iostream>
#include <string> //Added so I can use strings in the code

int main(int argc, char** argv)
{
	std::string poem("The Polar Bear never makes his bed;\n"
		"He sleeps on a cake of ice instead.\n"
		"He has no blanket, no quilt, no sheet\n"
		"Except the rainand snowand sleet.\n"
		"He drifts about on a white ice floe\n"
		"While cold winds howland blizzards blow\n"
		"And the temperature drops to forty below.\n"
		"The Polar Bear never makes his bed;\n"
		"The blanket he pulls up over his head\n"
		"Is lined with softand feathery snow.\n"
		"If ever he roseand turned on the light,\n"
		"He would find a world of bathtub white,\n"
		"And icebergs floating through the night.\n"
		"\n"
		"Author: William Jay Smith.\n");
	std::cout << poem << std::endl;
}