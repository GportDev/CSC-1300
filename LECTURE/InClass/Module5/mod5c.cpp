/*
	Title:    mod5c.cpp
	Author:   Gabriel Porteiro
	Date:     09-18-2023
	Purpose:  Practice for loops (in-class practice)
*/	

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int rnum = 0; 	//rnum holds the random number generated
	int total;  	//total for the particular ability
	int oddRoll;	//holds the number of times an ODD roll occurred
	int rollNum;	//Number of times dice has been rolled for this ability
	
	
	//seed the random number generator
	srand (time(0));
	
	cout << "\nDnD Stat Roll\n";
	cout << "1 - Strength\n";
	cout << "2 - Dexterity\n";
	cout << "3 - Constitution\n";
	cout << "4 - Intelligence\n";
	cout << "5 - Wisdom\n";
	cout << "6 - Charisma\n";
	
	cout << "\nFor your character stats, I am rolling a"
			" 6-sided die until an ODD dice roll \noccurs more "
			"than once OR the total of all dice rolled so far is equal\n"
			"to or exceeds 20, whichever comes first.\n\nIf the total "
			"exceeds 20, then the last dice roll is removed.\n\n"
			"I will then print the result for each ability score.\n\n";
	
	for (int i=1; i<= 6; i++) {
		total = 0;
		oddRoll = 0;
		rollNum = 0;

		while(oddRoll < 2 && total < 20) {
			rnum = (rand() % 6) + 1; //Originally from 0 to 5. With +1 from 0 to 6 (6-1+1 +1)
			rollNum++;
			total += rnum;

			cout << "\nroll " << rollNum << ": " << rnum << endl;

			if(rnum % 2 != 0) {
				oddRoll++;
			}

		}

		//When the total surpass 20, the while loop will not run anymore and the last value of rnum will still be in the memory, it will not be overwritten by 0
		if(total > 20) {
			total -= rnum;
		}

		cout << "\n********* Ability " << i << " score is " << total << endl;
	}
	
	cout << endl;
	return 0;
}