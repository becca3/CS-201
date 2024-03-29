// pointers.cpp
// Glenn G. Chappell
// 9 Apr 2018
//
// For CS 201 Spring 2018
// Programming with Pointers
//
// Modified 11/14/18
// Chris Hartman
// For CS 201 Fall 2018

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


// changeInt
// Given a pointer to int, change the value pointed to.
void changeInt(int * p)  // p points to value to change
{	
	*p = 8;
    // WRITE THIS!!!
}


int main()
{
	//int val;
    int ss = 3;
    int tt = 4;

    cout << "START" << endl;
    cout << "Value of ss: " << ss << endl;
    cout << "Value of tt: " << tt << endl;
    cout << endl;

    int * ip;
	int ip2 = 9;
	int ip3 = 7;

    // *** HERE, ADD CODE THAT USES ip to modify variables ss and tt
	ss = ip2;
	tt = ip3;

	ip = &ss;
	ip = &tt;

    cout << "AFTER USING ip" << endl;
    cout << "Value of ss: " << ss << endl;
    cout << "Value of tt: " << tt << endl;
    cout << endl;

    // *** UNCOMMENT AND COMPLETE THE FOLLOWING LINE

	int p = 8;
	ss = p;
	changeInt(&p);  // Pass a pointer to ss to function changeInt

    cout << "AFTER CALLING changeInt" << endl;
    cout << "Value of ss: " << ss << endl;
    cout << endl;

    // Wait for user
    cout << "PRESS ENTER ";
    while (cin.get() != '\n') ;

    return 0;
}

