#include <iostream>

int main(int argc, char** argv)
{
	int num;

	std::cout << "Please enter a number: ";
	std::cin >> num; //Stores the number entered by the user 

	while (num != 1) 
	{
		if (num % 2 == 1)
			num = (3 * num) + 1;
		else
			num /= 2;

		std::cout << num << " ";
	}
	return 0;
}