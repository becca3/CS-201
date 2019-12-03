/**
Program: classes and headers.cpp
Author: Rebecca Morgan
Date: 02 December 2019
Description: Practice using classes in header files for CS-201
*/

#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student
{
	std::string name_;
	int id_;

public:
	Student();
	Student(std::string name);
	Student(int id);
	Student(std::string name, int id);
	void printInfo() const;
};

#endif 