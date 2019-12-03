#pragma comment (lib, "fltk.lib")
#pragma comment (lib, "comctl32.lib")

#ifndef BULLS_AND_COWS_H
#define BULLS_AND_COWS_H

#include <vector>

//Functions definitions.
int compareDigits(const std::vector<int>& nums, const std::vector<int>& guess);

void initVectors(std::vector<int>& nums, std::vector<int>& guess);

#endif