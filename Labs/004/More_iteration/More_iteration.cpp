#include <iostream>

void part1()
{
	for (int num = 1; num <= 100; num++)
		if (num % 3 == 0)
		{
			std::cout << "Fizz" << "\n";
		}
		else
		{
			std::cout << num << "\n";
		}
	std::cout << "\n";
}

void part2()
{
	for (int num = 1; num <= 100; num++)
		if (num % 3 == 0)
		{
			std::cout << "Fizz" << "\n";
		}
		else if (num % 5 == 0)
		{
			std::cout << "Buzz" << "\n";
		}
		else
		{
			std::cout << num << "\n";
		}
	std::cout << "\n";
}

void part3()
{
	for (int num = 1; num <= 100; num++)
		if (num % 3 == 0 && num % 5 == 0)
		{
			std::cout << "Fizz Buzz" << "\n";
		}
		else
		{
			std::cout << num << "\n";
		}
	std::cout << "\n";
}

int main(int argc, char** argv)
{
	part1();
	part2();
	part3();
	return 0;
}