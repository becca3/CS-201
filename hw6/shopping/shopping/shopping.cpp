#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<utility>

//Struct to store variables
struct Record
{
	double unitPrice;
	int Units;
	//std::string Record;
};
	
//Map of Records 
std::map<std::string, Record> products
{
	{"Apples", {2.00, 1}},
	{"Milk", {3.00, 2}},
	{"Rice", {1.00, 4}},
	{"Juice", {2.00, 6}},
	{"Cereal", {4.00, 2}},
	{"Biscuits", {3.00, 3}}
};

//float total()
//{
//	//std::accumulate();
//	return 0;
//}

//Stores items in cart 
std::vector<std::string> cart;

void addItem(std::string input)
{
	if (products.count(input))
	{
		cart.push_back(input);
		std::cout << "Added to cart." << std::endl;

		for (auto i : cart) 
		{
			std::cout << i << ", "; 
		}
	}
	else
	{
		std::cout << "Item not available." << std::endl;
	}
}

void removeItem(std::string input)
{
	if (products.count(input))
	{
		auto it = std::find(cart.begin(), cart.end(), input);
		if (it != cart.end())
		{
			cart.erase(it);
		}
		for (auto i : cart)
		{
			std::cout << i << ", ";
		}
	}
}

void printMap(std::map<std::string, Record> const & products)
{
	for (const auto& p : products)
	{
		auto k = p.first; 
		std::cout << "Product: " << k << std::endl;
		/*size_t num_pairs = products.size();
		std::cout << num_pairs << "\n";*/
	}
}

int main(int argc, char** argv)
{
	while (true)
	{
		std::string input;

		std::cout << "Welcome! Would you like to add or remove items? (Type 'add' or 'remove') \n";
		std::getline(std::cin, input);
		if (input == "end" || input == "End" || input == "END")
		{
			std::cout << "Session ended!" << std::endl;
			break;
		}
		else
		{
			if (input == "add")
			{

				printMap(products);
				std::cout << "Choose an item you want to add to your cart: \n";
				std::getline(std::cin, input);
				std::cout << "\n";
				addItem(input);
				std::cout << "\n";
			}
			else
			{
				std::cout << "Which item would you like to remove?: \n";
				std::getline(std::cin, input);
				std::cout << "\n";
				removeItem(input);
				std::cout << "\n";
			}
		}
	}
	return 0;
}