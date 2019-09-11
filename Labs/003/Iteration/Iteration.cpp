#include <iostream>

void exercise1()
{
	int counter = 0;
	while (counter < 21)
	{
		std::cout << "Counter is at: " << counter << "\n";
		counter++;
	}
}

void exercise2()
{
	int row = 0;
	int col = 0;

	while (col < 11)
	{
		std::cout << "\n";
		col++;
		row = 0;

		while (row < 61)
		{
			std::cout << "#";
			row++;
		}
	}
}

int main(int argc, char** argv)
{
	exercise1();
	exercise2();
	return 0; 
}

