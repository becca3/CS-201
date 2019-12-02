#include <iostream>

const char Alphabet[] = {
	'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 
	'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
	'W', 'X', 'Y', 'Z' };

int main(int arcg, char** argv)
{
	for (auto i : Alphabet)
	{
		std::cout << "Letter is: " << i << std::endl;
	}
	return 0;
}