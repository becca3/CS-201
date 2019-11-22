# include <iostream>
# include <ctime>
# include <stdlib.h>


int main()
{
	int a;
	int b;
	int c;
	int step_num;
	char* x;
	char* x_old;

	std::cout << "\n";
	std::cout << "CELLULAR AUTOMATON:\n";

	c = 80;
	step_num = 80;

	x = new char[c + 2];
	x_old = new char[c + 2];

	for (a = 0; a <= c + 1; a++)
	{
		x[a] = ' ';
	}
	x[40] = '*';

	for (a = 1; a <= c; a++)
	{
		std::cout << x[a];
	}
	std::cout << "\n";

	for (b = 1; b <= step_num; b++)
	{
		for (a = 0; a < c + 2; a++)
		{
			x_old[a] = x[a];
		}
		for (a = 1; a <= c; a++)
		{
			if ((x_old[a - 1] == ' ' && x_old[a] == ' ' && x_old[a + 1] == '*') ||
				(x_old[a - 1] == ' ' && x_old[a] == '*' && x_old[a + 1] == ' ') ||
				(x_old[a - 1] == ' ' && x_old[a] == '*' && x_old[a + 1] == '*') ||
				(x_old[a - 1] == '*' && x_old[a] == ' ' && x_old[a + 1] == ' '))
			{
				x[a] = '*';
			}
			else
			{
				x[a] = ' ';
			}
		}


		x[0] = x[c];
		x[c + 1] = x[1];

		for (a = 1; a <= c; a++)
		{
			std::cout << x[a];
		}
		std::cout << "\n";
	}

	//Reset the pointers. 
	delete[] x;
	delete[] x_old;


	std::cout << "\n";

	return 0;
}