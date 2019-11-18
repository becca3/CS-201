//#include<iostream>
//#include<map>
//#include<string>
//#include<vector>
//#include<iomanip>
//#include<algorithm>
//#include<utility>
//
////Struct to store variables
//struct Record
//{
//	double unitPrice;
//	int Units;
//	//std::string Record;
//};
//	
////Map of Records 
//std::map<std::string, Record> products
//{
//	{"Apples", {2.00, 1}},
//	{"Milk", {3.00, 2}},
//	{"Rice", {1.00, 4}},
//	{"Juice", {2.00, 6}},
//	{"Cereal", {4.00, 2}},
//	{"Biscuits", {3.00, 3}}
//};
//
////float total()
////{
////	//std::accumulate();
////	return 0;
////}
//
////Stores items in cart 
//std::vector<std::string> cart;
//
//void addItem(std::string input)
//{
//	if (products.count(input))
//	{
//		cart.push_back(input);
//		std::cout << "Added to cart." << std::endl;
//
//		for (auto i : cart) 
//		{
//			std::cout << i << ", "; 
//		}
//	}
//	else
//	{
//		std::cout << "Item not available." << std::endl;
//	}
//}
//
//void removeItem(std::string input)
//{
//	if (products.count(input))
//	{
//		auto it = std::find(cart.begin(), cart.end(), input);
//		if (it != cart.end())
//		{
//			cart.erase(it);
//		}
//		for (auto i : cart)
//		{
//			std::cout << i << ", ";
//		}
//	}
//}
//
//void printMap(std::map<std::string, Record> const & products)
//{
//	for (const auto& p : products)
//	{
//		auto k = p.first; 
//		std::cout << "Product: " << k << std::endl;
//		/*size_t num_pairs = products.size();
//		std::cout << num_pairs << "\n";*/
//	}
//}
//
//int main(int argc, char** argv)
//{
//	while (true)
//	{
//		std::string input;
//
//		std::cout << "Welcome! Would you like to add or remove items? (Type 'add' or 'remove') \n";
//		std::getline(std::cin, input);
//		if (input == "end" || input == "End" || input == "END")
//		{
//			std::cout << "Session ended!" << std::endl;
//			break;
//		}
//		else
//		{
//			if (input == "add")
//			{
//
//				printMap(products);
//				std::cout << "Choose an item you want to add to your cart: \n";
//				std::getline(std::cin, input);
//				std::cout << "\n";
//				addItem(input);
//				std::cout << "\n";
//			}
//			else
//			{
//				std::cout << "Which item would you like to remove?: \n";
//				std::getline(std::cin, input);
//				std::cout << "\n";
//				removeItem(input);
//				std::cout << "\n";
//			}
//		}
//	}
//	return 0;
//}

#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
#include <algorithm> 

struct Record
{
	double unitPrice;
	int units;
};
void printInventory(std::map<std::string, Record>& inventory);
void buy(std::map<std::string, Record>& inventory, double& total);
void drop(std::map<std::string, Record>& inventory, double& total);

int main()
{
	std::string action;
	std::map<std::string, Record> inventory;
	inventory["apples"] = { 2.00, 2 };
	inventory["rice"] = { 1.50, 2 };
	inventory["juice"] = { 1.00, 4};
	inventory["cereal"] = { 2.50, 10 };
	inventory["biscuits"] = { 1.50, 15 };
	inventory["pineapple"] = { 2.5, 2 };
	inventory["orange"] = { 0.10, 42 };
	double total = 0;
	printInventory(inventory);
	std::cout << "You can 'browse', 'buy', 'remove item', 'see cart' or 'leave'.\n";
	while (true)
	{
		getline(std::cin, action);
		std::transform(action.begin(), action.end(), action.begin(), ::tolower);
		if (action == "browse")
		{
			printInventory(inventory);
		}
		else if (action == "buy")
		{
			buy(inventory, total);
		}
		else if (action == "leave")
		{
			break;
		}
		else if (action == "remove item")
		{
			drop(inventory, total);
		}
		else if (action == "see cart")
		{

		}
		std::cout << "Current total is $" << total << "\n";
	}
	return 0;
}
void printInventory(std::map<std::string, Record>& inventory)
{
	for (auto item : inventory)
	{
		std::cout << "We have " << item.second.units << " " << item.first <<
			" for the low price of $" << item.second.unitPrice << "\n";
	}
}
void buy(std::map<std::string, Record>& inventory, double& total)
{
	std::cout << "What would you like to buy? ";
	std::string item;
	getline(std::cin, item);
	if (inventory[item].units > 0)
	{
		inventory[item].units -= 1;
		total += inventory[item].unitPrice;
	}
	else
	{
		std::cout << "We don't have more of that.";
	}
}
void drop(std::map<std::string, Record>& inventory, double& total)
{
	std::cout << "What would you like to remove? ";
	std::string item;
	getline(std::cin, item);
	inventory[item].units += 1;
	total -= inventory[item].unitPrice;
}