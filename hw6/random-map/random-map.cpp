#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include<ctime>
#include<stdlib.h>

int RandomBetweenU(int first, int last);
int RandomBetweenN(int first, int last);
int RandomBetween(int first, int last);
void PrintDistribution(const std::map<int, int>& numbers);

int RandomBetweenU(int first, int last)
{
	std::random_device r2;
	std::mt19937 gen(r2());
	std::uniform_int_distribution<int> dist(first, last);
	std::cout << "Mean is: " << dist(gen) << "\n";
	for (int i = first; i <= last; i++)
	{
		std::cout << "Numbers are: " << i << "\n";
	}
	std::cout << "\n";
	return dist(gen); 
}

int RandomBetweenN(int first, int last)
{
	std::random_device r2;
	std::mt19937 gen (r2());
	std::normal_distribution<double> dist (first, last);
	return dist(gen);
	std::cout << "\n";
}

int RandomBetween(int first, int last)
{
	srand(time(NULL));
	int random = (std::rand() % last) + 1;
	std::cout << "Number is: " << random << "\n";
	return random;
	std::cout << "\n";
}

int main()
{
	int first;
	int last; 

	std::cout << "Enter a lower bound number: " << "\n";
	std::cin >> first;
	std::cout << "Enter an upper bound number: " << "\n";
	std::cin >> last;

	//RandomBetweenU(first, last);
	//RandomBetweenN(first, last);
	RandomBetween(first, last);

	//Seed with a real random value, if available
	std::random_device r;

	// Choose a random mean between 1 and 6
	std::default_random_engine e1(r());
	std::uniform_int_distribution<int> uniform_dist(1, 6);
	int mean = uniform_dist(e1);
	std::cout << "Randomly-chosen mean: " << mean << '\n';

	// Generate a normal distribution around that mean
	std::seed_seq seed2{ r(), r(), r(), r(), r(), r(), r(), r() };
	std::mt19937 e2(seed2);
	std::normal_distribution<> normal_dist(mean, 2);

	std::map<int, int> hist;
	for (int n = 0; n < 10000; ++n) 
	{
		++hist[std::round(normal_dist(e2))];
	}
	std::cout << "Normal distribution around " << mean << ":\n";
	for (auto p : hist) {
		std::cout << std::fixed << std::setprecision(1) << std::setw(2)
			<< p.first << ' ' << std::string(p.second / 200, '*') << '\n';
	}
}