#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>

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
	if (input != "end" || input != "End" || input != "END")
	{
		if (products.count(input))
		{
			cart.push_back(input);
			std::cout << "Added to cart." << std::endl;
		}
		else
		{
			std::cout << "Item not available." << std::endl;
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
	printMap(products);

	std::string input;
	while ()
	{
		std::cout << "Choose an item you want to add to your cart: \n";
		std::cin >> input;
		addItem(input);
	}

	return 0;
}