#include <iostream>
#include <sstream>
#include <string>
#include "string.hpp"

void string(std::string stringValue)
{
	std::string strVal = "3, 5, 8, 9";
	std::istringstream val (strVal); 
	
	for (int x = 0; x < strVal.size(); x++);
	{
		int str; 
		val >> str;
		std::cout << str*2 << "\n";
	}
}