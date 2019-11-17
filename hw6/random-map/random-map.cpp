#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include<ctime>
#include<stdlib.h>
#include<utility>

int RandomBetweenU(int first, int last);
int RandomBetweenN(int first, int last);
int RandomBetween(int first, int last);
void PrintDistribution(const std::map<int, int>& numbers);

std::map<int, int> numbers;

int RandomBetweenU(int first, int last)
{
	std::random_device r2;
	std::mt19937 gen(r2());
	std::uniform_int_distribution<int> dist(first, last);

	/*for (int i = first; i <= last; i++)
	{ 
		std::cout << "Numbers are: :" << i << "\n";
	}*/

	std::cout << "Mean is: " << dist(gen) << "\n";
	std::cout << "\n";
	return dist(gen); 
}


int RandomBetweenN(int first, int last)
{
	std::random_device r2;
	std::mt19937 gen (r2());
	std::normal_distribution<double> dist (first, last);
	
	/*for (int i = first; i <= last; i++)
	{
		std::cout << "Normal dist: " << dist(gen) << "\n";
	}*/

	return dist(gen);
	std::cout << "\n";
}

int RandomBetween(int first, int last)
{
	srand(time(NULL));
	int random = (std::rand() % last) + 1;
	//std::cout << "Number is: " << random << "\n";
	return random;
	std::cout << "\n";
}

void PrintDistribution(const std::map<int, int>& numbers)
{
	/*for (int n = 0; n < 10000; ++n) 
	{
		++numbers[std::round(dist(gen))];
	}
	std::cout << "Normal distribution around " << dist(gen) << ":\n";
	for (auto p : numbers)
	{
		std::cout << std::fixed << std::setprecision(1) << std::setw(2)
			<< p.first << ' ' << std::string(p.second / 200, '*') << '\n';
	}*/
}

int main()
{
	int first;
	int last; 

	std::cout << "Enter a lower bound number: " << "\n";
	std::cin >> first;
	std::cout << "Enter an upper bound number: " << "\n";
	std::cin >> last;

	RandomBetweenU(first, last);
	RandomBetweenN(first, last);
	RandomBetween(first, last);
	PrintDistribution(numbers);
}