#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <stdlib.h>

int RandomBetweenU(int first, int last, std::mt19937& e1);
int RandomBetweenN(int first, int last, std::mt19937& e1);
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
	std::mt19937 e1(seedObj);

	// Create uniform historgram
	std::map<int, int> uniformHistogram;
	for (int i = 0; i < 10000; i++) {
		++uniformHistogram[std::round(RandomBetweenU(first, last, e1))];
	}

	// Print the uniform histogram
	std::cout << "Uniform histogram: \n";
	PrintDistribution(uniformHistogram);

	// Create normal histogram
	std::map<int, int> normalHistogram;
	for (int i = 0; i < 10000; i++) {
		int value;
		while (true) {
			value = std::round(RandomBetweenN(first, last, e1));
			if (value <= last && value >= first)
				break;
		}
		++normalHistogram[value];
	}

	// Print the normal histogram
	std::cout << "Normal histogram: \n";
	PrintDistribution(normalHistogram);

	// Create standard rand() histogram
	std::map<int, int> standardHistogram;
	for (int i = 0; i < 10000; i++) {
		++standardHistogram[std::round(RandomBetween(first, last))];
	}

	// Print the normal histogram
	std::cout << "Normal rand histogram: \n";
	PrintDistribution(standardHistogram);

	return 0;
}

int RandomBetweenU(int first, int last, std::mt19937& e1) {

	std::uniform_int_distribution<int> uniform_dist(first, last);
	int value = uniform_dist(e1);

	return value;

}

int RandomBetweenN(int first, int last, std::mt19937& e1) {

	std::normal_distribution<> normal_dist(4, 1), min(first), max(last);
	int value = normal_dist(e1);

	return value;

}

int RandomBetween(int first, int last) {
	int value = (std::round(std::rand()));
	value = value % 6;
	value++;
	return value;

}

void PrintDistribution(const std::map<int, int>& numbers) {

	for (auto p : numbers) {
		if (p.first > 1 || p.first < 6) {
			std::cout << std::fixed << std::setprecision(1) << std::setw(2) << p.first << ' '
				<< std::string(p.second / 20, '*') << std::endl;
		}
		else {
			std::cout << std::fixed << std::setprecision(1) << std::setw(2) << p.first 
				<< ' ' << "# of instances: " << p.second << std::endl;
		}
	}

	std::cout << std::endl;
}