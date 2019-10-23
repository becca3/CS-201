/**
Program: fifo-lifo.cpp
Author: Rebecca Morgan
Date: 20th October 2019
Description: fifo and lifo programs for CS-201
*/

#include<iostream>
#include<string>
#include<vector>

//First-in First-out
void FifoPush(std::vector<std::string>& container, const std::string& item)
{
	std::cout << "Container contains: ";
	container.push_back(item);
}

void FifoPop(std::vector<std::string>& container, const std::string& item)
{
	container.erase(container.begin());
}

//Last-in First-out
void LifoPush(std::vector<std::string>& container, const std::string& item)
{
	std::cout << "Container contains: ";
	container.push_back(item);
}

void LifoPop(std::vector<std::string>& container, const std::string& item)
{
	container.pop_back();
}

//Shared functionality 
bool IsContainerEmpty(const std::vector<std::string>& container)
{
	if (container.empty())
	{
		std::cout << "Container empty" << std::endl;
		return true;
	}
	else
	{
		std::cout << "Container not empty" << std::endl;
		return false;
	}
}

void PrintContainer(const std::vector<std::string>& container)
{
	for (int x = 0; x < container.size(); x++)
	{
		std::cout << container[x] << std::endl;
	}
}

//Tests to verify the functions work
bool TestFifo(std::vector<std::string>& empty_container, const std::string& item1)
{
	empty_container.push_back(item1);
	PrintContainer(empty_container);
	if (empty_container.empty())
	{
		std::cout << "Test failed";
		return true;
	}
	else
	{
		std::cout << "Test successful";
		return false;
	}
	return 0;
}

bool TestLifo(std::vector<std::string>& empty_container2, const std::string& item2)
{
	empty_container2.push_back(item2);
	PrintContainer(empty_container2);
	if (empty_container2.empty())
	{
		std::cout << "Test failed";
		return true;
	}
	else
	{
		std::cout << "Test successful";
		return false;
	}
	return 0;
}

int main(int argc, char** argv)
{
	//First-in First-out
	std::string item = "hello";
	std::string item1 = "world";
	std::string item2 = "numbers";
	std::vector<std::string> container;
	std::vector<std::string> empty_container;
	std::vector<std::string> empty_container2;


	FifoPush(container, item);
	PrintContainer(container);
	std::cout << "\n";
	IsContainerEmpty(container);
	std::cout << "\n";

	FifoPop(container, item);
	PrintContainer(container);
	std::cout << "\n";
	IsContainerEmpty(container);
	std::cout << "\n";

	//Last-in First-out
	LifoPush(container, item);
	PrintContainer(container);
	std::cout << "\n";
	IsContainerEmpty(container);
	std::cout << "\n";

	LifoPop(container, item);
	PrintContainer(container);
	std::cout << "\n";
	IsContainerEmpty(container);
	std::cout << "\n";
	
	//Tests to verify the functions work
	TestFifo(empty_container, item1);
	std::cout << "\n";
	TestLifo(empty_container2, item2);
	return 0;
}
