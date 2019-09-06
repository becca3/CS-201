#include <iostream>

int main(int argc, char** argv)
{
	int rows, space = 1, sides, top; /**All variables declared.
									 "rows" allows user to choose how big the diamond will be.
									 "space" sets the space size for printing spaces.
									 "sides" variable for printing spaces at the sides to make a diamond shape.
									 "top" variable for building the actual diamond.*/

	std::cout << "How many rows would you like to print?: "; //Asks user for number of rows they'd like
	std::cin >> rows;
	space = rows - 1; //Space variable reinitialised to be the value of rows - 1 

	if (std::cin.fail())
	{
		std::cout << "Value entered is not an integer.";
	}
	else
	{
		for (top = 1; top <= rows; top++) //Builds top of diamond. 
		{
			for (sides = 1; sides <= space; sides++)
				std::cout << " ";

			space--;

			for (sides = 1; sides <= 2 * top - 1; sides++)
				std::cout << "#";

			std::cout << "\n"; //Creates a new line after each row to form diamond shape
		}

		space = 1; //Space reinitialised to 1

		for (top = 1; top <= rows - 1; top++) //Builds bottom of diamond
		{
			for (sides = 1; sides <= space; sides++)
				std::cout << " ";

			space++;

			for (sides = 1; sides <= 2 * (rows - top) - 1; sides++)
				std::cout << "#";

			std::cout << "\n"; //Creates a new line after each row to form diamond shape
		}
		return 0;
	}
}