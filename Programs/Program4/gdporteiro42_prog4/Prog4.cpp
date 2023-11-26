/*
    Title: Prog4.cpp
    Author: Gabriel Porteiro
    Date: 11/16/2023
    Purpose: Hold the main function of this program
*/

#include "prog4.h"

int main() {
    int userChoice = 0;
    int totalVehicles = 0;

    char saveChoice = 'n';
    Vehicle garage[100];

    do {
        cout << "\nWhat would you like to do? " << endl;

        // Display the main menu
        cout << "\t1. Enter some vehicles." << endl;
        cout << "\t2. Delete a vehicle." << endl;
        cout << "\t3. Print vehicles." << endl;
        cout << "\t4. Print statistics on vehicle cost." << endl;
        cout << "\t5. End program." << endl;
        cout << "\tEnter 1, 2, 3, 4, or 5." << endl;

        cout << "CHOICE:   ";
        cin >> userChoice;
        cin.ignore();

        // Validate user input
        while(userChoice < 0 || userChoice > 5) {
            cout << "Please, select a value between 1 and 5. " << endl;
            cin >> userChoice;
            cin.ignore();
        }

        switch (userChoice) {
        case 1:
            enterVehicle(totalVehicles, garage);
            break;
        case 2:
            deleteVehicle(totalVehicles, garage);
            break;
        case 3:
            printVehicles(totalVehicles, garage);
            break;
        case 4:
            printStatistics(totalVehicles, garage);
            break;
        case 5:
            cout << "\nDo you wanna save your vehicles? (Y/N) ";
            cin >> saveChoice;
            cin.ignore();

            if(saveChoice == 'y') {
                saveVehiclesToFile(totalVehicles, garage);
            }

            cout << "\n\n***** GOOD BYE *****"  << endl;
            break;
        }

    } while (userChoice != 5);

    return 0;
}