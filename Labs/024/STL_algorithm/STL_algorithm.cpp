#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


int main(int argc, char** argv)
{
	int number = 0;
	int number2 = 0;

	std::vector<int> data;
	data.push_back(7);
	data.push_back(4);
	data.push_back(3);
	data.push_back(6);
	data.push_back(5);
	data.push_back(4);
	data.push_back(8);
	data.push_back(9);
	data.push_back(0);
	data.push_back(11);

	std::cout << "Original vector: " << "\n";
	for (int i = 0; i < data.size(); i++)
	{
		std::cout << data[i] << "\n";
	}
	std::cout << "\n";

	std::sort(data.begin(), data.end());
	std::cout << "Used std::sort: " << "\n";

	for (int i = 0; i < data.size(); i++)
	{
		std::cout << data[i] << "\n";
	}
	std::cout << "\n";

	std::reverse(data.begin(), data.end()); 
	std::cout << "Used std::reverse: " << "\n";

	for (int i = 0; i < data.size(); i++)
	{
		std::cout << data[i] << "\n";
	}

	std::cout << "\n";

	std::fill(data.begin(), data.begin() + 2, 20);
	std::cout << "Used std::fill: " << "\n";

	for (int i = 0; i < data.size(); i++)
	{
		std::cout << data[i] << "\n";
	}

	std::cout << "\n";

	std::rotate(data.begin(), data.begin() + 1, data.end());
	std::cout << "Used std::rotate: " << "\n";

	for (int i = 0; i < data.size(); i++)
	{
		std::cout << data[i] << "\n";
	}

	std::cout << "\n";
	
	return 0;
}