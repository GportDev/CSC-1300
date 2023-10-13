/*
    Title: Module 4 a
    Author: Gabriel Porteiro 
    Date: 09-01-2023
    Purpose: Return the type of table that the user should seat depending how many people will be in the party
*/

#include <iostream>

using namespace std;

int main() {

    int numPeople;

    cout << "\n\nHow many are in your party? ";
    cin >> numPeople;

    if (numPeople < 0) {
        cout << "\nNo negative people are allowed." << endl;
    }

    if (numPeople <= 2) {
        cout << "\nYou may be seated at a small table." << endl;
    } else {
        cout << "\nYou may be seated at a large table." << endl;
    }

    return 0;
}