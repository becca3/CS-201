#include "intio.hpp"
#include "lab8.hpp" 
#include <iostream>

int doInput()
{
	return getInt();
}
int compute(int n)
{
	if (n <= 0)
	{
		return 0;
	}
	else
	{
		int div = 0; //here im talking about divisor
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				div++;
			}
		}
		return div;
	}
}