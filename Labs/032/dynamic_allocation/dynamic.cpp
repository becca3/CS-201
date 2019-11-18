// dynamic.cpp  INCOMPLETE
// Glenn G. Chappell
// 13 Apr 2018
//
// For CS 201 Spring 2018
// Dynamic Allocation
//
// Modified 11/19/18
// Chris Hartman
// For CS 201 Fall 2018

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


// printThree
// Takes a pointer to an int array, which must have size at least 3 --
// or a null pointer. Prints the first three items in the array, or
// "NULL POINTER", if the passed pointer is null.
void printThree(int const * p)
{
    if (p == nullptr)
    {
        cout << "NULL POINTER" << endl;
    }
    else
    {
        cout << p[0] << " " << p[1] << " " << p[2] << endl;
    }
}


// Main Program
// Do some dynamic allocation. Call printThree multiple times.
int main()
{
    // Make a dynamic array of int, with size at least three. Set the
    // values of the first three items in the array.
    // Then call printThree, passing (a pointer to) the array.

	int* array = new int[5];

	array[0] = 3;
	array[1] = 5;
	array[2] = 7;
	array[3] = 9;
	array[4] = 11;

	printThree(array);

    cout << "Output is: " << array << endl; /*array[0] << ", " << array[1] << ", " << array[2]*/

    cout << endl;

    // Call printThree with a null pointer.

	array = nullptr;
	printThree(array);

    cout <<  array << endl;
    cout << endl;

    // Deallocate the dynamic array.

	delete[] array;

    cout << array << endl;
    cout << endl;

    // Wait for user
    cout << "Press ENTER to quit ";
    while (cin.get() != '\n') ;
}

