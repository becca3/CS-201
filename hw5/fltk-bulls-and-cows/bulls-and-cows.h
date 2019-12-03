/**
Program: bulls-and-cows.h
Author: Rebecca Morgan
Date: 02 December 2019
Description: fltk bulls and cows game for CS-201
*/

#pragma comment (lib, "fltk.lib")
#pragma comment (lib, "comctl32.lib")

#ifndef BULLS_AND_COWS_H
#define BULLS_AND_COWS_H

#include <vector>

//Functions definitions.
int compareDigits(const std::vector<int>& nums, const std::vector<int>& guess);

void initVectors(std::vector<int>& nums, std::vector<int>& guess);

#endif