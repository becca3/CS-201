# include <iostream>
# include <ctime>
# include <stdlib.h>


int main()
{
	int x;
	int y;
	int z;
	int step_num;
	char* a;
	char* a_old;

	std::cout << "\n";
	std::cout << "CELLULAR AUTOMATON:\n";

	z = 80;
	step_num = 80;

	a = new char[z + 2];
	a_old = new char[z + 2];

	for (x = 0; x <= z + 1; x++)
	{
		a[x] = ' ';
	}
	a[40] = '*';

	for (x = 1; x <= z; x++)
	{
		std::cout << a[x];
	}
	std::cout << "\n";

	return 0;
}