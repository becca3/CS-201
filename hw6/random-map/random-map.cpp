#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <stdlib.h>

int RandomBetweenU(int first, int last, std::mt19937& r1);
int RandomBetweenN(int first, int last, std::mt19937& r1);
int RandomBetween(int first, int last);
void PrintDistribution(const std::map<int, int>& numbers);

int main()
{
	// Declare endpoints of the range for the distributions

	int first = 1;
	int last = 6;

	// Declare pseudo-random device for creating seeds
	std::random_device r;

	// Create a seed sequence to feed to the generator
	std::seed_seq seedObj{ r(), r(), r(), r(), r(), r(), r(), r() };

	// Declare random-number generator and provide with seedObj sequence
	std::mt19937 r1(seedObj);

	// Create uniform historgram
	std::map<int, int> uniformHistogram;
	for (int i = 0; i < 10000; i++) 
	{
		++uniformHistogram[std::round(RandomBetweenU(first, last, r1))];
	}

	// Print the uniform histogram
	PrintDistribution(uniformHistogram);

	// Create normal histogram
	std::map<int, int> normalHistogram;
	for (int i = 0; i < 10000; i++) 
	{
		++normalHistogram[std::round(RandomBetweenN(first, last, r1))];
	}

	// Print the normal histogram
	PrintDistribution(normalHistogram);

	// Create standard rand() histogram
	std::map<int, int> standardHistogram;
	for (int i = 0; i < 10000; i++) 
	{
		++standardHistogram[std::round(RandomBetween(first, last))];
	}

	// Print the normal histogram
	PrintDistribution(standardHistogram);

	return 0;
}

int RandomBetweenU(int first, int last, std::mt19937& r1) 
{

	std::uniform_int_distribution<int> uniform_dist(first, last);
	int ran = uniform_dist(r1);

	return ran;
}

int RandomBetweenN(int first, int last, std::mt19937& r1) 
{
	std::normal_distribution<> normal_dist(2.5, 2);
	int ran = normal_dist(r1);

	return ran;
}

int RandomBetween(int first, int last) 
{
	int ran = (std::round(std::rand()));
	ran = ran % 6;
	return ran;
}

void PrintDistribution(const std::map<int, int>& numbers) 
{
	for (auto p : numbers)
	{
		std::cout << std::fixed << std::setprecision(1) 
			<< std::setw(2) << p.first << ' ' << std::string(p.second / 20, '*') 
			<< std::endl;
	}
	std::cout << std::endl;
}