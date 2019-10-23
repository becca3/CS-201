#include "truncstruct.hpp"
#include <iostream>
#include <string>

int main (int argc, char** argv)
{
	/*std::string str;
	std::cout << "Input a string: ";
	std::cin >> str;

	std::cout << trunc8(str).str;*/
	
	StringInfo strInfo;
	std::string str;

	std::cout << "Input a string: ";
	std::cin >> strInfo.str;
	std::cout << "Input a length: ";
	std::cin >> strInfo.len;
	
	std::cout << trunc(strInfo).str;


	return 0;
}


StringInfo trunc8(const std::string& str);
StringInfo trunc(const StringInfo& strInfo);