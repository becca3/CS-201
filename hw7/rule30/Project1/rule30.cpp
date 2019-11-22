//# include <iostream>
//# include <ctime>
//# include <stdlib.h>
//
//
//int main()
//{
//	int x; 
//	int y; 
//	int z; 
//	int step_num;
//	char* a; 
//	char* a_old;
//
//	std::cout << "\n";
//	std::cout << "CELLULAR AUTOMATON:\n";
//
//	z = 80;
//	step_num = 80;
//
//	a = new char[z + 2];
//	a_old = new char[z + 2];
//
//	for (x = 0; x <= z + 1; x++)
//	{
//		a[x] = ' ';
//	}
//	a[40] = '*';
//
//	for (x = 1; x <= z; x++)
//	{
//		std::cout << a[x];
//	}
//	std::cout << "\n";
//
//	for (y = 1; y <= step_num; y++)
//	{
//		for (x = 0; x < z + 2; x++)
//		{
//			a_old[x] = a[x];
//		}
//		for (x = 1; x <= z; x++)
//		{
//			if ((a_old[x - 1] == ' ' && a_old[x] == ' ' && a_old[x + 1] == '*') ||
//				(a_old[x - 1] == ' ' && a_old[x] == '*' && a_old[x + 1] == ' ') ||
//				(a_old[x - 1] == ' ' && a_old[x] == '*' && a_old[x + 1] == '*') ||
//				(a_old[x - 1] == '*' && a_old[x] == ' ' && a_old[x + 1] == ' '))
//			{
//				a[x] = '*';
//			}
//			else
//			{
//				a[x] = ' ';
//			}
//		}
//	}
//
//	a[0] = a[z];
//	a[z + 1] = a[1];
//
//	for (x = 1; x <= z; x++)
//	{
//		std::cout << a[x];
//	}
//	std::cout << "\n";
//
//	//Reset the pointers 
//	delete[] a; 
//	delete[] a_old;
//
//
//	std::cout << "\n";
//	std::cout << "CELLULAR AUTOMATON\n";
//	return 0;
//}

# include <iostream>
# include <ctime>
# include <stdlib.h>

using namespace std;


int main()
{
	int a;
	int b;
	int c;
	int step_num;
	char* x;
	char* x_old;

	cout << "\n";
	cout << "CELLULAR AUTOMATON:\n";

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
		cout << x[a];
	}
	cout << "\n";

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


		/*x[0] = x[c];
		x[c + 1] = x[1];

		for (a = 1; a <= c; a++)
		{
			cout << x[a];
		}
		cout << "\n";*/
	}

	//Reset the pointers. 
	delete[] x;
	delete[] x_old;


	cout << "\n";

	return 0;
}