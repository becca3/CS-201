#include <iostream>
#include <string>

//Class is data type 
//Object is a variable of the data type
//Default access of class = private, struct = public  

class Bear
{
public :
	int number_;
	std::string species_;

	void printInfo()
	{
		std::cout << "Species name is: " << species_ << "\n";
		std::cout << "Number of individuals are: " << number_ << "\n";
	}
};

class Animals
{
public :

	// Getters
	int getNum() const { return number_; }
	const std::string getName() { return species_; }

	// Setters
	void setNum(int h) { number_ = h; }
	void setName(std::string m) { species_ = m; }

	std::string toString()
	{
		return "{ " + getName() + ", " + std::to_string(getNum()) + " }";
	}
	 
private : 
	int number_;
	std::string species_;
};


int main(int argc, char** argv)
{
	Bear one;

	one.species_ = "Polar Bear";
	one.number_ = 2;

	one.printInfo();
	std::cout << "\n";

	Animals two;

	two.setName("Panda");
	two.setNum(5);

	std::cout << "Species name is: " << two.getName() << std::endl;
	std::cout << "Number of individuals are: " << two.getNum() << std::endl;

	return 0;
}