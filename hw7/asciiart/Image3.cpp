// Image3.hpp
// Implementation for Image3 class
// Original Author: Jonathan Metzgar
// CS 201 course

#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include "Image3.hpp"

using std::ifstream;
using std::ofstream;

// Image3 Constructor
Image3::Image3(unsigned width, unsigned height)
{
	w = width;
	h = height;
	pixels.resize(width * height);
}

// Return a pixel from the image
const Color3& Image3::getPixel(unsigned x, unsigned y) const 
{
	if (y * w + x > pixels.size()) 
	{
		return pixels[0];
	}

	return pixels[y * w + x];
}

void Image3::setPixel(unsigned x, unsigned y, const Color3& color) 
{
	pixels[y * w + x] = color;
}

bool Image3::savePPM(const std::string& path) const 
{
	std::ofstream fout(path);
	if (!fout) {
		return false;
	}
	fout << *this;
	fout.close();
	return false;
}

bool Image3::loadPPM(const std::string& path) 
{
	std::ifstream fin(path);
	if (!fin)
	{
		return false;
	}
	try 
	{
		fin >> *this;
	}
	catch (...)
	{
		return false;
	}
	return true;
}

void Image3::print(std::ostream& ostr) const 
{
	for (std::size_t i = 0; i < pixels.size(); i++) 
	{
		ostr << pixels[i].asciiValue();
		if (i != 0 && (i + 1) % w == 0) 
		{
			ostr << '\n';
		}
	}
}

// STREAM OPERATORS for IMAGE3 class

std::ostream& operator<<(std::ostream& ostr, const Image3& image) 
{
	ostr << "P3\n" << image.w << ' ' << image.h << "\n255";
	for (Color3 px : image.pixels)
	{
		ostr << '\n' << px;
	}
	return ostr;
}

std::istream& operator>>(std::istream& instr, Image3& image) 
{
	std::string line;
	instr >> line;
	if (line != "P3")
	{ 
		throw;
	}
	image.pixels.clear(); // Empty the vector.

	bool widthSet = false;
	bool heightSet = false;
	bool colorspaceSet = false;

	std::vector<int> rgb;

	while (true) 
	{
		std::getline(instr, line);
		if (!instr) 
		{
			break;
		}
		if (line[0] == '.' || line == "") continue;
		std::istringstream str(line);
		while (str) 
		{
			int value;
			str >> value;
			if (!str) break;
			if (!widthSet)
			{
				widthSet = true;
				image.w = value;
				continue;
			}
			if (!heightSet) 
			{
				heightSet = true;
				image.h = value;
				continue;
			}
			if (!colorspaceSet)
			{
				colorspaceSet = true;
				continue;
			}
			rgb.push_back(value);
			if (rgb.size() == 3) 
			{
				image.pixels.push_back(Color3(rgb[0], rgb[1], rgb[2]));
				rgb.clear();
			}
		}
	}
	return instr;
}
