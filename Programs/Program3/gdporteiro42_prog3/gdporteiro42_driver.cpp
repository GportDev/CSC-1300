/*
    Title: gdporteiro42_driver.cpp
    Author: Gabriel Porteiro
    Date: 10/31/2023
    Purpose: File that contains the main function of program 3
*/

#include "gdporteiro42_prog3.h"

int main() {
    int const SIZE = 50;

    // Program arrays
    int candyType[SIZE];
    int numOompas[SIZE];
    float costMaterials[SIZE];
    float askingPrice[SIZE];
    string candyFlavor[SIZE];

    // Program util values
    int numberOfItems = 0;
    int maxIndex = 0;
    float maxValue = 0;
    string candyTypeName;

    // Program controllers
    int mainMenuChoice = 0;
    int candyTypeMenuChoice = 0;

    cout << "*************************************************" << endl;
    cout << "*  WELCOME TO WILLY WONKA'S CHOCOLATE FACTORY!  *" << endl;
    cout << "*************************************************" << endl;

    while(mainMenuChoice != 5) {

        cout << "\n\nWonka's candy management program: " << endl;
        cout << setw(7) << right << "1." << "     Add a piece of candy to inventory" << endl;
        cout << setw(7) << right << "2." << "     Calculate totals for candy" << endl;
        cout << setw(7) << right << "3." << "     Calculate profits for candy" << endl;
        cout << setw(7) << right << "4." << "     Print the most expensive candy" << endl;
        cout << setw(7) << right << "5." << "     Quit the program" << endl;

        cout << "\nChoose 1-5: ";
        cin >> mainMenuChoice;

        // Validate the user input and print the menu until a valid user choice
        while(mainMenuChoice <= 0 || mainMenuChoice > 5){
            cout << "\n\nYou must enter between 1 and 5!" << endl;
            cout << "Choose again: ";
            cin >> mainMenuChoice;
        }

        // Use the user choice to perform a program feature
        switch (mainMenuChoice) {
        
        // Let the user add a candy into the inventory
        case 1:
            addCandy(numberOfItems, candyType, candyFlavor, costMaterials, numOompas, askingPrice);
            break;
        
        // Let the user get the total cost, num of Oompas, and asking price for any kind of candy
        case 2:
            cout << "\n\nChoose what candy you want to get the total for: " << endl;
            cout << setw(7) << right << "1." << "     Wonkas Bars" << endl;
            cout << setw(7) << right << "2." << "     Everlasting Gobstoppers" << endl;
            cout << setw(7) << right << "3." << "     Hair toffees" << endl;
            cout << setw(7) << right << "4." << "     All Candy" << endl;

            cout << "\nChoose 1-4: ";
            cin >> candyTypeMenuChoice;

            while(candyTypeMenuChoice < 1 || candyTypeMenuChoice > 4) {
                cout << "Please, select between 1 and 4: ";
                cin >> candyTypeMenuChoice;
            }

            calculateTotals(candyTypeMenuChoice, numberOfItems, candyType, numOompas, costMaterials, askingPrice, candyFlavor);
            break;

        // Let the user get the profit of any kind of candy in inventory
        case 3:
            cout << "\n\nChoose what candy you want to get the profits for: " << endl;
            cout << setw(7) << right << "1." << "     Wonkas Bars" << endl;
            cout << setw(7) << right << "2." << "     Everlasting Gobstoppers" << endl;
            cout << setw(7) << right << "3." << "     Hair toffees" << endl;
            cout << setw(7) << right << "4." << "     All Candy" << endl;

            cout << "\nChoose 1-4: ";
            cin >> candyTypeMenuChoice;

            while(candyTypeMenuChoice < 1 || candyTypeMenuChoice > 4) {
                cout << "Please, select between 1 and 4: ";
                cin >> candyTypeMenuChoice;
            }

            calculateProfit(candyTypeMenuChoice, numberOfItems, candyType, costMaterials, askingPrice);
            break;

        // Let user to get the most expansive candy
        case 4:
            maxValue = getMaxPrice(numberOfItems, askingPrice, maxIndex);

            switch (candyType[maxIndex]) {
            case 1:
                candyTypeName = "Wonka bar";
                break;
            case 2:
                candyTypeName = "Everlasting Gobstoper";
                break;
            case 3:
                candyTypeName = "Hair toffees";
                break;
            }

            cout << "Candy with the highest price is the " << candyFlavor[maxIndex] << " flavored " << candyTypeName << " for $" << fixed << setprecision(2) << maxValue << endl << endl;

            break;
        case 5:
            cout << "\n\n--------------------------------------------------------\n" << endl;
            cout << "Thank you for use the Wonka's candy management program!" << endl;
            cout << "\n--------------------------------------------------------" << endl;
            break;
        }
    }

    return 0;
}