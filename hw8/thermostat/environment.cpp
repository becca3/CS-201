#include "environment.h"

#include <iostream>

Enviornment::Enviornment(int pInt)
{
	current_temp = pInt;
}

int Enviornment::getTemp() const
{
	return current_temp;
}

bool Enviornment::isHeaterOn() const
{
	return is_heater_on;
}

void Enviornment::setHeaterState(bool pBool)
{
	is_heater_on = pBool;
}

void Enviornment::iteration()	
{
	std::cout << "Heater is ";
	if (is_heater_on)
	{
		std::cout << "on." << std::endl;
		++current_temp;
	}
	else
	{
		std::cout << "off." << std::endl;
		--current_temp;
	}
	std::cout << "Current temperature: " << current_temp << std::endl;
}