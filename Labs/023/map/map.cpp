#include <iostream>
#include <string>
#include<map>

int main(int argc, char** argv)
{
	std::map<std::string, int> scores;
	scores.insert(std::pair<std::string, int>("Stacey", 22));
	scores.insert(std::pair<std::string, int>("Alan", 27));
	scores.insert(std::pair<std::string, int>("Kevin", 52));
	scores.insert(std::pair<std::string, int>("Morgan", 46));
	scores.insert(std::pair<std::string, int>("Alice", 100));
	scores.insert(std::pair<std::string, int>("Ellie", 65));
	
	scores.erase("Alan");

	for (const auto& p : scores)
	{
		auto key = p.first;   // Key
		auto value = p.second;  // Value
		std::cout<< "Key: " << key << ", value: " << value;
		std::cout<< std::endl;
	}

	return 0;
}