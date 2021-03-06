﻿// using pointers for nested structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>
using namespace std;

struct interior{
	string material;
	char color;
};

struct car {
	int year;
	char brand;
	bool automatic;
	interior seat;
};

//we can easily use pointers to access this nested structure
//please remember pointers should only be used when really neccessary
int main()
{
	car mercedes;
	car *mercedesptr;

	mercedesptr = &mercedes;

	mercedesptr->automatic = true;
	mercedesptr->brand = 'S';
	mercedesptr->year = 2018;
	mercedesptr->seat.color = 'B';
	mercedesptr->seat.material = "Leather";

	cout << "This is a " << mercedesptr->brand << "Brand Mercedes"
		<< "\n Automatic: " << mercedesptr->automatic << "\n Year: " << mercedesptr->year
		<< "\n Seat color and Material: " << mercedesptr->seat.color << ", "
		<< mercedesptr->seat.color;

}
