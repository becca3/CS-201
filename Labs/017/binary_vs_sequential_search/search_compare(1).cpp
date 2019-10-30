// search_compare.cpp  INCOMPLETE
// Glenn G. Chappell
// 25 Feb 2018
//
// For CS 201 Spring 2018
// Compare Search Algorithms
//
// Modified
// Chris Hartman
// 3 Oct 2018
//
// For CS 201 Fall 2018

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <vector>
using std::vector;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;
// for clock
#include <stdio.h>
#include <time.h>

// binarySearch
// Given a SORTED vector<int> holding keys, and a vector<int> holding
// the associated values, and a key to search for (thekey). Does Binary
// Search in an attempt to find the given key. If it is not found,
// returns false. If it is found, sets thevalue to the associated value
// and returns true.
bool binarySearch(const vector<int> & keys, const vector<int> & values,
		int thekey2, int & thevalue2) 
{

	int first = 0;  // Index of first item in range
	int last = int(keys.size());
	// 1 + index of last item in range
	while (true) 
	{
		// Compute size of range
		int size = last - first;

		// Special case: size 0
		if (size == 0)
		{
			return false;
		}
		// Special case: size 1
		if (size == 1) 
		{
			if (keys[first] == thekey2)
			{
				thevalue2 = keys[first];
				return true;
			}
			return false;
		}

		// General case - split range in half
		int middle = first + size / 2;
		if (thekey2 < keys[middle]) 
		{
			last = middle;
		}
		else 
		{
			first = middle;
		}
	}
}

// sequentialSearch
// Given a vector<int> holding keys, and a vector<int> holding the
// associated values, and a key to search for (thekey). Does Sequential
// Search in an attempt to find the given key. If it is not found,
// returns false. If it is found, sets thevalue to the associated value
// and returns true.
bool sequentialSearch(const vector<int> & keys, const vector<int> & values,
		int thekey, int & thevalue) 
{
	for (int i = 0; i < int(keys.size()); ++i)
	{
		if (keys[i] == thekey)
		{
			thevalue = values[i];
			return true;
		}
	}
	return false;
}

// readInt
// Read an integer from a line of text read from cin, with error
// checking. Initial prompt shold be printed before calling this
// function. Returns the integer typed.
int readInt()
{
	while (true) 
	{
		// Input a line
		string line;
		getline(cin, line);

		// Get int from line
		istringstream in(line);
		int num;
		in >> num;

		// Error check
		if (!in) 
		{
			cout << "Try again. Please type an integer: ";
			continue;
		}
		return num;
	}
}

// Main program
// Create a dataset, and do searches in it.
int main() 
{
	while (true) 
	{

		// Get size of dataset
		cout << "Dataset size (0 to end): ";
		int size = readInt();
		cout << endl;
		if (size <= 0)
			break;

		// Make the parallel vectors associative dataset
		cout << "Creating dataset ..." << endl;
		// TODO CREATE DATASET HERE!!! *****************************
		vector<int> keys
		{
				1,
				2,
				3,
				4,
				5,
				6,
				7,
				8,
				9,
				10
		};
		vector<int> values
		{
			100,
			200,
			300,
			400,
			500,
			600,
			700,
			800,
			900,
			1000
		};

		std::cout << "\n";
		for (int i = 0; i < keys.size(); i++)
		{
			std::cout << values[i] << "\n";
		}
		std::cout << "\n";

		// *********************************************************
		cout << "Dataset created" << endl;

		// Wait for user
		cout << "Press ENTER to search ";
		string dummy;
		getline(cin, dummy);
		cout << endl;

		// time the searches
		clock_t timer = clock();

		// Do searches
		// TODO BINARY SEARCH HERE!!! ******************************

		int thevalue2;
		int thekey2 = 0;

		bool found2 = binarySearch(keys, values, thekey2, thevalue2);
		{
			if (found2)
			{
				cout << "Key found: " << thevalue2 << endl;
			}
			else
			{
				cout << "Key not found." << endl;
			}
		}

		// *********************************************************
		timer = clock() - timer;
		cout << "Binary Search DONE: " << endl;
		printf("  approximately %f seconds", (float) timer / CLOCKS_PER_SEC);
		cout << endl;
		cout << endl;

		timer = clock();
		// TODO SEQUENTIAL SEARCH HERE!!! **************************

		int thevalue;
		int thekey = 0;

		bool found = sequentialSearch(keys, values, thekey, thevalue);
		if (found)
		{
			cout << "Key found: " << thevalue << endl;
		}
		else
		{
			cout << "Key not found." << endl;
		}
	
		// *********************************************************
		timer = clock() - timer;
		cout << "Sequential Search DONE" << endl;
		printf("  approximately %f seconds", (float) timer / CLOCKS_PER_SEC);
		cout << endl;
		cout << endl;
	}
}
