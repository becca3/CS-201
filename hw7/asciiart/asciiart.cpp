#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "Color3.hpp"
#include "Image3.hpp"

int main()
{
	Image3 image(0, 0);
	if (image.loadPPM("parrot.ppm")) 
	{
		std::cout << "Image loaded correctly!" << std::endl;
		image.print(std::cout);
	}
	else 
	{
		std::cout << "Image failed to load!" << std::endl;
	}
	return 0;
}