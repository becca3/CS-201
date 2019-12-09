#include "environment.h"
#include <iostream>

//Creates environment. 
Environment::Environment(int pInt)
{
	current_temp = pInt;
}

//Gets current temperature. 
int Environment::getTemp() const
{
	return current_temp;
}

//Checks if heater is on. 
bool Environment::isHeaterOn() const
{
	return is_heater_on;
}

//Sets heater to on or off.
void Environment::setHeaterState(bool pBool)
{
	is_heater_on = pBool;
}

//Changes temperature of heater. 
void Environment::iteration()	
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