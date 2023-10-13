/*
	Title:  	Lab3b.cpp
	Author:		Gabriel Porteiro
	Date:		09-14-2023
	Purpose:	Learning switch statements fixing a given code
*/

#include <iostream>
using namespace std;

int main()
{
	char grade;

	// Receive user's grade
	cout << "What grade will you earn on this lab assignment?" << endl;
	cout << "GRADE: ";
	cin >> grade;

	// Test the grade entered by the user and compare if the cases to print the correct statement about the grade
	switch (grade) {
		case 'A': cout << "\nAn A - you rock!!" << endl;
			break;
		case 'B': cout << "\nYou got a B - good job." << endl;
			break;
		case 'C': cout << "\nEarning a C is satisfactory." << endl;
			break;
		case 'D': {
			cout << "\nWhile D is passing, there is a problem." << endl;
			cout << "You really didn't learn much." << endl;
			break;
		}
		case 'F': cout << "\nOh BARF!    You failed - better luck next time." << endl;
			break;
		// A default output in case the user didn't enter a valid grade
		default: cout << "\nYou did not enter an A, B, C, D, or F.\n" << endl;
	}

    return 0;
}