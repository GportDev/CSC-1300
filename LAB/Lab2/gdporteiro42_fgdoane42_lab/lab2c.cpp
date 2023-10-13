/*
    Title: LAB 2
    Authors: Gabriel Porteiro and Franklin Doane
    Date: 08-31-2023
    Purpose: To show possible married names for two people
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string firstName1;
	string lastName1;
	string firstName2;
	string lastName2;

	cout << "What is the first person's first name?" << endl;
	cin >> firstName1;
	cout << "\nWhat is the first person's last name?" << endl;
	cin >> lastName1;

	cout << "\nWhat is the second person's first name?" << endl;
	cin >> firstName2;
	cout << "\nWhat is the second person's last name?" << endl;
	cin >> lastName2;

	cout << "\nHere are some common married-couple names:" << endl << endl;
	cout << firstName1 << " " << lastName1 << " and " << firstName2 << " " << lastName2 << endl << endl;
	cout << firstName1 << " and " << firstName2 << " " << lastName1 << endl << endl;
	cout << firstName1 << " and " << firstName2 << " " << lastName2 << endl << endl;
	cout << firstName1 << " " << lastName1 << "-" << lastName2 << " and " << firstName2 << " " << lastName1 << "-" << lastName2 << endl << endl;
	cout << firstName1 << " " << lastName2 << "-" << lastName1 << " and " << firstName2 << " " << lastName2 << "-" << lastName1 << endl << endl;

	return 0;
}