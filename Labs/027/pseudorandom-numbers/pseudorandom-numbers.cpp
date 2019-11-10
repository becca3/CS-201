#include <iostream>
#include <random>

int main(int argc, char** argv)
{
	std::vector<int> heads;
	std::vector<int> tails;
	std::random_device numbers;
	std::mt19937 generator(numbers());
	std::uniform_int_distribution<int> heads_tails(0, 1);

	//Generate 0 or 1 equating to heads (1) or tails (0) 


	for (size_t i = 0; i <= 1000; ++i)
	{
		std::cout << heads_tails(generator) << "\n";
		if (heads_tails(generator) == 1)
		{
			heads.push_back(1);
		}
		if (heads_tails(generator) == 0)
		{
			tails.push_back(1);
		}
	}

	std::cout << "Number of heads are: " << heads.size() << std::endl;
	std::cout << "\n";
	std::cout << "Number of tails are: " << tails.size() << std::endl;

	std::cout << std::endl;

	return 0;
}