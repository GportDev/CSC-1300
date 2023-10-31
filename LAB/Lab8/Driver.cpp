/*******************************************************************
	Title:   Driver.cpp
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

int main() {
	char zooName[100];
	float elephantFood[SIZE];
	string elephantNames[SIZE];
	float total, average;
	int highestIndex;
	
	cout << "\n\nHello!  What is the name of your elephant zoo?\n";
	cin.getline(zooName, 100);
	
	// Get all data of the Elephants
	getElephantData(elephantFood, elephantNames);

	// Compare the data to get the highest food amount and the elephant that eat this
	getStats(elephantFood, total, average, highestIndex);
	
	// Print the final block of information
	cout << "-----------------------------------------------------------------";
	cout << "\nThe total amount of food consumed by all " << SIZE << " elephants\nat " << zooName;
	cout << " is " << total << " pounds in one month.\n\n";

	cout << "The average amount of food consumed at\n" << zooName;
	cout << " is " << average << " pounds.";
	cout << "\n\nThe elephant who eats the most (" << elephantFood[highestIndex];
	cout << " pounds) is " << elephantNames[highestIndex];
	cout << "!!\n";
	cout << "-----------------------------------------------------------------";
	cout << "\n\n";
	
	return 0;
}