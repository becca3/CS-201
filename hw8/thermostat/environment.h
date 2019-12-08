
#ifndef ENVIORNMENT_H
#define ENVIORNMENT_H

class Enviornment
{
	int current_temp;
	bool is_heater_on = true;
public:
	Enviornment(int pInt);

	//Returns current temperature.
	int getTemp() const;

	//Returns if the heater is on.
	bool isHeaterOn() const;

	//Sets the heater is on or off. 
	void setHeaterState(bool pBool);

	//Increases/decreases temp depending on if heater is on or off.
	void iteration();
};

#endif