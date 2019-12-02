#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student
{
private:
	std::string name_;
	int ID_;

public: 
	Student(std::string name, int ID);

	void printInfo();

	std::string getName() { return name_; }
	int getID() { return ID_; }
};

#endif 