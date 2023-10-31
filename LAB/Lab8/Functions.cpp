/*******************************************************************
	Title:   Functions.cpp
	Author:  Gabriel Porteiro
	Date:    October 26, 2023
	Purpose: This program allows the user to enter in
	         10 elephant's names and consumption of each elephant
	         per month.  The program finds & prints the total
	         and average number of pounds eaten by all the 
			 elephants as well as the name & consumption amount of
	         the elephant that eats the most.
********************************************************************/
#include "Elephant.h"

// Get all data of the Elephants
void getElephantData(float food[], string names[]) {
	cout << "\n\nEnter the name and how many pounds of food each elephant ate last month.\n";

	for(int i = 0; i < SIZE; i++) {
		cout << "ELEPHANT " << i + 1 << ":\n";
		cout << "\tNAME - ";
		cin.ignore();
		getline(cin, names[i]);
		cout << "\tFOOD AMOUNT - ";
		cin >> food[i];
	}
}

// Get all data and compare this
void getStats(float food[], float& total, float& average, int& highestIndex) {
	float highestAmt = 0.0;

	for(int i = 0; i < SIZE; i++) {
		total += food[i];

		// Compare the data to get the highest food amount and the elephant that eat this
		if(food[i] > highestAmt) {
			highestAmt = food[i];
			highestIndex = i;
		}
	}

	// Calculate the average of the food consumption
	average = total/SIZE;
}