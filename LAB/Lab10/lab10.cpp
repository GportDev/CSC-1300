/*
    Title: Lab10.cpp
    Author: Gabriel Porteiro
    Date: 16/11/2023
    Purpose: Manage pastry chefs in a competition
*/

// Imports/Libs
#include <iostream>
#include <string>
#include <limits>

using namespace std;

// Structures
struct PastryCategory {
    string name;
    int numberOfAwards;
};

struct Chef {
    string name;
    string hometown;
    int wonCategories;
};


// Main function
int main() {

    int chefsAmount = 0;
    int chefsAwards = 0;
    int mostAwards = numeric_limits<int>::min();
    int mostAwardsIndex = 0;

    Chef *chefs;

    // Define a pointer to the future array of pointers
    PastryCategory* *awardsArray; 

    // Read the amount of chefs that are in the competition
    cout << "How many chefs are competing? ";
    cin >> chefsAmount;
    cin.ignore();

    cout << "\n\nPlease, enter in information about each chef." << endl;

    // Create a dynamic array with the size of the amount of chefs
    chefs = new Chef [chefsAmount];

    // Create a dynamic array that will keep the categories that this chef will compete
    awardsArray = new PastryCategory*[chefsAmount];

    // Let the user enter the informations about the chefs
    for(int i = 0; i < chefsAmount; i++) {
        cout << "\n**** CHEF " << i + 1 << " ****" << endl;
        cout << "\tNAME: ";
        getline(cin, chefs[i].name);

        cout << "\tHOMETOWN: ";
        getline(cin, chefs[i].hometown);

        cout <<"\n\tHow many categories has " << chefs[i].name << " won awards in? ";
        cin >> chefs[i].wonCategories;
        cin.ignore();

        // Create a new array based on the amount of awards that the chef earned
        awardsArray[i] = new PastryCategory [chefs[i].wonCategories];

        // Get the informations about the categories that the chef won
        for(int j = 0; j < chefs[i].wonCategories; j++) {
            cout << "\tFOR CATEGORY " << j + 1 << ":" << endl;
            cout << "\t\tName of category - ";
            getline(cin, awardsArray[i][j].name);

            cout << "\t\tNumber of awards in " << awardsArray[i][j].name << " - ";
            cin >> awardsArray[i][j].numberOfAwards;
            cin.ignore();
        }
    }

    // Calculate the chef that have the most awards
    for(int i = 0; i < chefsAmount; i++) {
        chefsAwards = 0;

        // Sum all the awards won by the current chef
        for(int j = 0; j < chefs[i].wonCategories; j++) {
            chefsAwards += awardsArray[i][j].numberOfAwards;
        }

        // Update the mostAwards variable with new winner value
        if(chefsAwards > mostAwards) {
            mostAwards = chefsAwards;
            mostAwardsIndex = i;
        }
        
    }

    // Print out the most awarded chef
    cout << "\n\nThe pastry chef who has the most awards (" << mostAwards << " awards) is " << chefs[mostAwardsIndex].name << ", with awards in the following categories: " << endl; 

    for(int i = 0; i < chefs[mostAwardsIndex].wonCategories; i++) {
        cout << "\t" << awardsArray[mostAwardsIndex][i].name << " (" << awardsArray[mostAwardsIndex][i].numberOfAwards << ") " << endl;
    }

    // Delete all dynamic arrays is order to prevent leaks of memory
    delete [] awardsArray;
    delete [] chefs;

    return 0;
}