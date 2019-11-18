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

//Function declarations.
void printInventory(std::map<std::string, Record>& inventory);
void buy(std::map<std::string, Record>& inventory, double& total);
void remove(std::map<std::string, Record>& inventory, double& total);

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
			remove(inventory, total);
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
void remove(std::map<std::string, Record>& inventory, double& total)
{
	std::cout << "What would you like to remove? ";
	std::string item;
	getline(std::cin, item);
	inventory[item].units += 1;
	total -= inventory[item].unitPrice;
}