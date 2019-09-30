#include <iostream>

int main(int argc, char** argv)
{
	int num; //Stores number entered 

	std::cout << "Please enter a number: ";
	std::cin >> num; //Stores the number entered by the user 
	std::cout << num << " "; //Prints first number of sequence 

	while (num != 1) //If the number entered isn't 1, perform the collatz operaiton on it
	{
		if (num % 2 == 1)
			num = (3 * num) + 1;
		else
			num /= 2;

		std::cout << num << " "; //Print sequence 
	}
	return 0;
}