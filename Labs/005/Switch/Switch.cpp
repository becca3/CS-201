#include <iostream>

void part1()
{
	int input = 0;
	std::cout << "Input a number: \n";
	"\n";

	while (input >= 0)
	{
		std::cin >> input;

		switch (input % 5)
		{
		case 1:
			std::cout << "one" << "\n";
			break;
		case 2:
			std::cout << "two" << "\n";
			break;
		case 3:
			std::cout << "three" << "\n";
			break;
		default:
			std::cout << "Not in an earlier case";
			std::cout << "\n";
			break;
		}
		if (input < 0)
		{
			std::cout << "Input is too low";
			std::cout << "\n";
		}
	}
}

int main(int argc, char** argv)
{
	part1();
	return 0;
}