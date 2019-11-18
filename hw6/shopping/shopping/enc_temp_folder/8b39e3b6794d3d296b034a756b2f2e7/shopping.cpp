#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
#include <vector>
#include <algorithm> 

//Struct.
struct Record
{
	double unitPrice;
	int units;
};

//Function declarations.
void printInventory(std::map<std::string, Record>& inventory);
void buy(std::map<std::string, Record>& inventory, double& total);
void remove(std::map<std::string, Record>& inventory, double& total);


int main(int argc, char** argv)
{
	std::string input;
	std::map<std::string, Record> inventory;

	//Inventory of store items.
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
		getline(std::cin, input);
		std::transform(input.begin(), input.end(), input.begin(), ::tolower);
		if (input == "browse")
		{
			printInventory(inventory);
		}
		else if (input == "buy")
		{
			buy(inventory, total);
		}
		else if (input == "leave")
		{
			break;
		}
		else if (input == "remove item")
		{
			remove(inventory, total);
		}

		std::cout << "Current total is $" << total << "\n";
	}

	return 0;
}


//Prints inventory for user to see what store has. 
void printInventory(std::map<std::string, Record>& inventory)
{
	for (auto item : inventory)
	{
		std::cout << "We have " << item.second.units << " " << item.first <<
			" for the low price of $" << item.second.unitPrice << "\n";
	}
}


//Function to add things to cart. 
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


//Remove things from cart.
void remove(std::map<std::string, Record>& inventory, double& total)
{
	std::cout << "What would you like to remove? ";
	std::string item;
	getline(std::cin, item);
	inventory[item].units += 1;
	total -= inventory[item].unitPrice;
}