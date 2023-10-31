/*
    Author: Gabriel Porteiro
    Title: func.cpp
    Date: 10/19/2023
    Purpose: Hold functions implementations
*/

#include "Lab7.h"

void getData(string& hero1Name, string& hero2Name, int& hero1Age, int& hero2Age, string& hero1Pet, string& hero2Pet) {
    cout << "\nEnter the data for the first super hero:" << endl;

    cout << "NAME: ";
    getline(cin, hero1Name);

    cout << "AGE: ";
    cin >> hero1Age;

    cin.ignore();

    cout << "PET (dog/cat/rabbit/guinea pig): ";
    getline(cin, hero1Pet);

    // Hero 2 section
    cout << "\nEnter the data for the second super hero:" << endl;

    cout << "NAME: ";
    getline(cin, hero2Name);

    cout << "AGE: ";
    cin >> hero2Age;

    cin.ignore();

    cout << "PET (dog/cat/rabbit/guinea pig): ";
    getline(cin, hero2Pet);
}

bool calculateResults(string hero1Name, string hero2Name, int hero1Age, int hero2Age, string hero1Pet, string hero2Pet) {

    // Start check 1
    int asciiHero1 = 0;
    int asciiHero2 = 0;
    bool check1 = false;

    // Get ASCII for the first hero
    for(int i = 0; i < hero1Name.length(); i++) {

        char letter = hero1Name.at(i);

        int asciiHero1Char = static_cast<int>(letter);

        asciiHero1 += asciiHero1Char;
    }
    cout << "The added ASCII value of " << hero1Name << " is " << asciiHero1 <<endl;

    // Get ASCII for the second hero
    for(int i = 0; i < hero2Name.length(); i++) {

        char letter = hero2Name.at(i);

        int asciiHero2Char = static_cast<int>(letter);

        asciiHero2 += asciiHero2Char;
    }
    cout << "The added ASCII value of " << hero2Name << " is " << asciiHero2 <<endl;

    if((abs(asciiHero1 - asciiHero2) <= 50) || (abs(asciiHero2 - asciiHero1) <= 50)) {
        check1 = true;
        cout << "\nCheck 1 is true\n";
    } else {
        check1 = false;
        cout << "\nCheck 1 is false\n";
    }

    // Start check 2
    bool check2 = false;

    //Check if hero's age is within 10 year far
    if((abs(hero1Age - hero2Age) <= 10) || (abs(hero2Age - hero1Age) <= 10)) {
        check2 = true;
        cout << "Check 2 is true\n";
    } else {
        check2 = false;
        cout << "Check 2 is false\n";
    }

    // Start check 3
    bool check3 = false;

    //Check if hero's pet are the same
    if(hero1Pet == hero2Pet) {
        check3 = true;
        cout << "Check 3 is true\n";
    } else {
        check3 = false;
        cout << "Check 3 is false\n\n";
    }

    if(check1 && check2) {
        return true;
    } else if(check2 && check3) {
        return true;
    } else if(check1 && check3) {
        return true;
    } else {
        return false;
    }
    
}
