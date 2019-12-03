/**
Program: classes and headers.cpp
Author: Rebecca Morgan
Date: 02 December 2019
Description: Practice using classes in header files for CS-201
*/

#include "student.hpp"
#include <iostream>


Student::Student()
{
	name_ = "DEFAULT";
	id_ = -1;
}

Student::Student(std::string name)
{
	name_ = name;
	id_ = -1;
}

Student::Student(int id)
{
	name_ = "DEFAULT";
	id_ = id;
}

Student::Student(std::string name, int id)
{
	name_ = name;
	id_ = id;
}

void Student::printInfo() const
{
	if (name_ == "DEFAULT")
		std::cout << "No Name registered." << std::endl;
	else
		std::cout << "Name : " << name_ << std::endl;

	if (id_ == -1)
		std::cout << "No ID registered." << std::endl;
	else
		std::cout << "ID : " << id_ << std::endl;
}