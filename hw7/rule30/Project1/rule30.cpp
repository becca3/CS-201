# include <iostream>
# include <ctime>
# include <stdlib.h>


int main()
{
	int x; //i
	int y; //j 
	int z; //n
	int step_num;
	char* a; //x
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

	for (y = 1; y <= step_num; y++)
	{
		for (x = 0; x < z + 2; x++)
		{
			a_old[x] = a[x];
		}
		for (x = 1; x <= z; x++)
		{
			if ((a_old[x - 1] == ' ' && a_old[x] == ' ' && a_old[x + 1] == '*') ||
				(a_old[x - 1] == ' ' && a_old[x] == '*' && a_old[x + 1] == ' ') ||
				(a_old[x - 1] == ' ' && a_old[x] == '*' && a_old[x + 1] == '*') ||
				(a_old[x - 1] == '*' && a_old[x] == ' ' && a_old[x + 1] == ' '))
			{
				a[x] = '*';
			}
			else
			{
				a[x] = ' ';
			}
		}
	}

	return 0;
}