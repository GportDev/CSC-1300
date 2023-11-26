/*
    Title: gdporteiro42_functions.cpp
    Author: Gabriel Porteiro
    Date: 10/31/2023
    Purpose: File that contains the functions of program 3
*/

#include "gdporteiro42_prog3.h"

// Function that calculate the price of a candy based on the cost of materials and number of Oompas
float calculatePrice(float costOfMaterials, int numOompas) {
    float finalPrice = (numOompas * OompaCost) + costOfMaterials;

    return finalPrice;
}

// Add a candy to the array of candies based on the type, flavor, cost, number of Oompas and the asking price
void addCandy(int& numberOfItems, int candyType[], string candyFlavor[], float costMaterials[], int numOompas[], float askingPrice[]) {

    // Variables that will serve as input validators before inserting the value in the array
    int selectedCandyType;
    int enteredNumOompas;
    float enteredCostOfMaterials;
    string enteredCandyFlavor;

    if(numberOfItems < 50) {
        cout << "\n\nChoose a candy type: " << endl;
        cout << setw(7) << right << "1." << "     Wonkas Bars" << endl;
        cout << setw(7) << right << "2." << "     Everlasting Gobstoppers" << endl;
        cout << setw(7) << right << "3." << "     Hair toffees" << endl;

        cout << "\nChoose 1-3: ";
        cin >> selectedCandyType;
        cin.ignore();

        while(selectedCandyType < 1 || selectedCandyType > 3) {
            cout << "\nYou should enter 1, 2, or 3!" << endl;
            cout << "Enter choice: ";
            cin >> selectedCandyType;
        }

        // Add the validated candy type in the array at the correspondent index
        candyType[numberOfItems] = selectedCandyType;

        // Get the candy flavor
        cout << "\nWhat's the flavor of your candy? ";

        cin.ignore();
        getline(cin, enteredCandyFlavor);

        // Add the typed flavor into the array of flavors
        candyFlavor[numberOfItems] = enteredCandyFlavor;

        // Get the cost of materials to make the candy
        cout << "How much did the material cost? $";
        cin >> enteredCostOfMaterials;

        cin.ignore();

        while(enteredCostOfMaterials < 0){
            cout << "\nMake this candy should cost more than $0.0, try again." << endl;
            cin >> enteredCostOfMaterials;

            cin.ignore();
        }

        // Add the validated cost of materials in the array at the correspondent index
        costMaterials[numberOfItems] = enteredCostOfMaterials;
        

        // Get the number of Oompas needed to make this candy
        cout << "How many Oompa Loompas did it take to make this candy? ";
        cin >> enteredNumOompas;

        cin.ignore();

        while(enteredNumOompas < 0){
            cout << "\nError!! You cannot have a negative number of Oompa Loompas!" << endl;
            cout << "How many Oompa Loompas did it take to make this candy? ";
            cin >> enteredNumOompas;

            cin.ignore();
        }

        // Add the validated amount of Oompas in the array at the correspondent index
        numOompas[numberOfItems] = enteredNumOompas;

        askingPrice[numberOfItems] = calculatePrice(enteredCostOfMaterials, enteredNumOompas);

        cout << "\nA new candy has been added to the inventory!" << endl;

        numberOfItems++;

    } else {
        cout << "\n\nSorry, you reached the total amount of candies that our system can handle" << endl;
    }

}

float getMaxPrice(int numberOfItems, float askingPrice[], int &maxIndex) {
    float maxValue = askingPrice[0];

    for(int i = 0; i < numberOfItems; i++) {
        if(askingPrice[i] > maxValue) {
            maxValue = askingPrice[i];
            maxIndex = i;
        }
    }

    return maxValue;
}

void calculateTotals(int typeOfTable, int numberOfCandies, int candyTypes[], int numOompas[], float costMaterials[], float askingPrice[], string candyFlavor[]) {

    float totalCost = 0.00;
    float totalPrice = 0.00;

    cout << fixed;

    switch (typeOfTable) {

    // Calculate the total only for wonka bars
    case 1:
        
        cout << "\n\n\nWonkas Bars in Inventory: " << endl << endl;

        cout << setw(25) << left << "TYPE" << setw(12) << right << "FLAVOR" << setw(12) << right << "COST"  << setw(16) << right << "NUM-OOMPAS" << setw(8) << right << "PRICE" << endl;
        cout << "--------------------------------------------------------------------------" << endl;
        for(int i = 0; i < numberOfCandies; i++) {
            if(candyTypes[i] == 1){
                cout << setw(25) << left << "Wonka Bar" << setw(12) << right << candyFlavor[i] << setw(12) << right << setprecision(2) << costMaterials[i] << setw(16) << right << numOompas[i] << setw(8) << right << setprecision(2) << askingPrice[i] << endl;
                totalCost += costMaterials[i];
                totalPrice += askingPrice[i];
            }
        }
        cout << "--------------------------------------------------------------------------" << endl << endl;

        cout << setw(25) << left <<"TOTALS: " << setw(12) << right << "$" << setw(12) << right << setprecision(2) << totalCost << setw(16) << right << "$" << setw(8) << right << setw(8) << right << setprecision(2) << totalPrice << endl << endl;
        break;

    // Calculate the total only for Everlasting gobstopper
    case 2:
        cout << "\n\n\nEverlasting Gobstoppers in Inventory: " << endl << endl;

        cout << setw(25) << left << "TYPE" << setw(12) << right << "FLAVOR" << setw(12) << right << "COST"  << setw(16) << right << "NUM-OOMPAS" << setw(8) << right << "PRICE" << endl;
        cout << "--------------------------------------------------------------------------" << endl;
        for(int i = 0; i < numberOfCandies; i++) {
            if(candyTypes[i] == 2){
                cout << setw(25) << left << "Everlasting Gobstopper" << setw(12) << right << candyFlavor[i] << setw(12) << right << setprecision(2) << costMaterials[i] << setw(16) << right << numOompas[i] << setw(8) << right << setprecision(2) << askingPrice[i] << endl;
                totalCost += costMaterials[i];
                totalPrice += askingPrice[i];
            }
        }
        cout << "--------------------------------------------------------------------------" << endl << endl;

        cout << setw(25) << left <<"TOTALS: " << setw(12) << right << "$" << setw(12) << right << setprecision(2) << totalCost << setw(16) << right << "$" << setw(8) << right << setw(8) << right << setprecision(2) << totalPrice << endl << endl;
        break;

    // Calculate the total only for Hair toffees
    case 3:
        cout << "\n\n\nHair toffees in Inventory: " << endl << endl;

        cout << setw(25) << left << "TYPE" << setw(12) << right << "FLAVOR" << setw(12) << right << "COST"  << setw(16) << right << "NUM-OOMPAS" << setw(8) << right << "PRICE" << endl;
        cout << "--------------------------------------------------------------------------" << endl;

        for(int i = 0; i < numberOfCandies; i++) {
            if(candyTypes[i] == 3){
                cout << setw(25) << left << "Hair toffee" << setw(12) << right << candyFlavor[i] << setw(12) << right << setprecision(2) << costMaterials[i] << setw(16) << right << numOompas[i] << setw(8) << right << setprecision(2) << askingPrice[i] << endl;
                totalCost += costMaterials[i];
                totalPrice += askingPrice[i];
            }
        }

        cout << "--------------------------------------------------------------------------" << endl << endl;

        cout << setw(25) << left <<"TOTALS: " << setw(12) << right << "$" << setw(12) << right << setprecision(2) << totalCost << setw(16) << right << "$" << setw(8) << right << setw(8) << right << setprecision(2) << totalPrice << endl << endl;
        break;


    // Calculate the total for every type of candy in storage
    case 4:
        cout << "\n\n\nEverlasting Gobstoppers in Inventory: " << endl << endl;

        cout << setw(25) << left << "TYPE" << setw(12) << right << "FLAVOR" << setw(12) << right << "COST"  << setw(16) << right << "NUM-OOMPAS" << setw(8) << right << "PRICE" << endl;
        cout << "--------------------------------------------------------------------------" << endl;

        for(int i = 0; i < numberOfCandies; i++) {
            if(candyTypes[i] == 1){
                cout << setw(25) << left << "Wonka bar" << setw(12) << right << candyFlavor[i] << setw(12) << right << setprecision(2) << costMaterials[i] << setw(16) << right << numOompas[i] << setw(8) << right << setprecision(2) << askingPrice[i] << endl;

                totalCost += costMaterials[i];
                totalPrice += askingPrice[i];
            } else if(candyTypes[i] == 2){
                cout << setw(25) << left << "Everlasting Gobstopper" << setw(12) << right << candyFlavor[i] << setw(12) << right << setprecision(2) << costMaterials[i] << setw(16) << right << numOompas[i] << setw(8) << right << setprecision(2) << askingPrice[i] << endl;

                totalCost += costMaterials[i];
                totalPrice += askingPrice[i];
            } else if(candyTypes[i] == 3){
                cout << setw(25) << left << "Hair toffee" << setw(12) << right << candyFlavor[i] << setw(12) << right << setprecision(2) << costMaterials[i] << setw(16) << right << numOompas[i] << setw(8) << right << setprecision(2) << askingPrice[i] << endl;

                totalCost += costMaterials[i];
                totalPrice += askingPrice[i];
            }
        }

        cout << "--------------------------------------------------------------------------" << endl << endl;

        cout << setw(25) << left <<"TOTALS: " << setw(12) << right << "$" << setw(12) << right << setprecision(2) << totalCost << setw(16) << right << "$" << setw(8) << right << setw(8) << right << setprecision(2) << totalPrice << endl << endl;
        break;
    } 
}

void calculateProfit(int typeOfTable, int numberOfCandies, int candyType[], float costMaterials[], float askingPrice[]) {

    float totalProfit = 0.00;
    float profit = 0.00;

    cout << fixed;

    switch (typeOfTable) {
    // Calculate the profit only for wonka bars
    case 1:
        cout << "\n\n\nTotal profits for Wonkas Bars in inventory: " << endl << endl;

        cout << setw(25) << left << "CANDY TYPE" << setw(14) << right << "PROFIT" << endl;
        cout << "----------------------------------------" << endl;
        for(int i = 0; i < numberOfCandies; i++) {
            if(candyType[i] == 1){
                profit = askingPrice[i] - costMaterials[i];
                cout << setw(25) << left << "Wonka Bar" << setw(14) << right << setprecision(2) << profit << endl;
                totalProfit += profit;
            }
        }
        cout << "----------------------------------------" << endl << endl;

        cout << setw(28) << left <<"TOTAL Profit: " << "$" << setw(10) << right << setprecision(2) << totalProfit << endl;
        break;

    // Calculate the profit only for Everlasting Gobstoppers
    case 2:
        cout << "\n\n\nTotal profits for Everlasting Gobstoppers in inventory: " << endl << endl;

        cout << setw(25) << left << "CANDY TYPE" << setw(14) << right << "PROFIT" << endl;
        cout << "----------------------------------------" << endl;
        for(int i = 0; i < numberOfCandies; i++) {
            if(candyType[i] == 2){
                profit = askingPrice[i] - costMaterials[i];
                cout << setw(25) << left << "Everlasting Gobstoppers" << setw(14) << right << setprecision(2) << profit << endl;
                totalProfit += profit;
            }
        }
        cout << "----------------------------------------" << endl << endl;

        cout << setw(28) << left <<"TOTAL Profit: " << "$" << setw(10) << right << setprecision(2) << totalProfit << endl;
        break;

    // Calculate the profit only for Hair toffees
    case 3:
        cout << "\n\n\nTotal profits for Hair toffees in inventory: " << endl << endl;

        cout << setw(25) << left << "CANDY TYPE" << setw(14) << right << "PROFIT" << endl;
        cout << "----------------------------------------" << endl;
        for(int i = 0; i < numberOfCandies; i++) {
            if(candyType[i] == 3){
                profit = askingPrice[i] - costMaterials[i];
                cout << setw(25) << left << "Hair toffees" << setw(14) << right << setprecision(2) << profit << endl;
                totalProfit += profit;
            }
        }
        cout << "----------------------------------------" << endl << endl;

        cout << setw(28) << left <<"TOTAL Profit: " << "$" << setw(10) << right << setprecision(2) << totalProfit << endl;
        break;

    // Calculate the profit for all candies in the inventory
    case 4:
        cout << "\n\n\nTotal profits for all candy in inventory: " << endl << endl;

        cout << setw(25) << left << "CANDY TYPE" << setw(14) << right << "PROFIT" << endl;
        cout << "----------------------------------------" << endl;
        for(int i = 0; i < numberOfCandies; i++) {
            if(candyType[i] == 1){
                profit = askingPrice[i] - costMaterials[i];
                cout << setw(25) << left << "Wonka Bar" << setw(14) << right << setprecision(2) << profit << endl;
                totalProfit += profit;
            } else if(candyType[i] == 2){
                profit = askingPrice[i] - costMaterials[i];
                cout << setw(25) << left << "Everlasting Gobstoppers" << setw(14) << right << setprecision(2) << profit << endl;
                totalProfit += profit;
            } else if(candyType[i] == 3){
                profit = askingPrice[i] - costMaterials[i];
                cout << setw(25) << left << "Hair toffees" << setw(14) << right << setprecision(2) << profit << endl;
                totalProfit += profit;
            }
        }
        cout << "----------------------------------------" << endl << endl;

        cout << setw(28) << left <<"TOTAL Profit: " << "$" << setw(10) << right << setprecision(2) << totalProfit << endl;
        break;
    }
}