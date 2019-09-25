#include<iostream>
#include"boolean.h"

int main(int argc, char** argv)
{
	for (int i = 1; i <= 40; i++)
	{
		if (isDiv3(i))
		{
			std::cout << i << "\n";
		}
	}
}
