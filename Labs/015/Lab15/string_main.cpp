#include <iostream>
#include <sstream>
#include <string>
#include "string.hpp"


int main(int argc, char** argv)
{
	std::string stringValue = "4.4 hello";
	std::istringstream val(stringValue);

	string(stringValue);
}