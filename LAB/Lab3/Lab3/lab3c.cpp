/*
    Title: LAB 3 C
    Authors: Gabriel Porteiro
    Date: 09-14-2023
    Purpose: Use a while loop to validate a user input.
*/

#include <iostream>

using namespace std;

int main() {
    char option = 'n';
    int sum = 0;

    //Validade both if the user enter the correct sum (22) and typed y (Yes) to quit in a loop.
    while (option != 'y' || sum != 22) {
        cout << "\nWhat do you get if you add 4+18? ";
        cin >> sum;

        cout << "\nEnter the letter 'y' if you want to quit." << endl;
        cin >> option;
        cout << "The letter you entered is " << option << endl;

        if (sum != 22) {
            cout << "Oh goat foot! You forgot how to add!" << endl;
        }
    }

    return 0;
}