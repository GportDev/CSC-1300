/*
    Author: Gabriel Porteiro
    Title: driver.cpp
    Date: 10/19/2023
    Purpose: Run the main function an check if the roommates are compatible
*/

#include "Lab7.h"

int main() {
    cout << "*************************************************" << endl;
    cout << "     Super Hero Roommate Compatibility Check     " << endl;
    cout << "*************************************************" << endl;

    string hero1Name;
    int hero1Age = 0;
    string hero1Pet;
    string hero2Name;
    int hero2Age = 0;
    string hero2Pet;

    getData(hero1Name, hero2Name, hero1Age, hero2Age, hero1Pet, hero2Pet);

    cout << "\n\n****** RESULTS ******\n" << endl;

    if(calculateResults(hero1Name, hero2Name, hero1Age, hero2Age, hero1Pet, hero2Pet)) {
        cout << hero1Name << " and " << hero2Name << " are compatible to be roommates!" << endl;
    } else {
        cout << hero1Name << " and " << hero2Name << " are not compatible to be roommates!" << endl;
    }

    return 0;
}
