#include <iostream>
#include <string>

const int off = 1;
const int on = 2;
const int unknown = 4;

void lights(int status)
{
	std::cout << "Status: ";

	if ((status & off) != 0)
		std::cout << "Light is off.";
	if ((status & on) != 0)
		std::cout << "Light is on.";
	if ((status & unknown) != 0)
		std::cout << "Light might be broken.";
	if (status == 0)
		std::cout << "Light is not there.";	
}

int main(int argc, char** argv)
{
	std::cout << "Light status: \n";
	lights(on | on);
	std::cout << "\n";

	std::cout << "Light status: \n";
	lights(off | unknown);
	std::cout << "\n";

	std::cout << "Light status: \n";
	lights(unknown | 0);
	std::cout << "\n";

	return 0;
}