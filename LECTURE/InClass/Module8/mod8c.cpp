/*
    Title: mod8c.cpp
    Author: Gabriel Porteiro
    Date: 10/25/2023
    Purpose: Use the new c-string methods
*/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    char name1[30] = "Gabriel";
    string name2 = "Julia";

    cout << "name1: " << name1 << endl;
    cout << "name2: " << name2 << endl;

    cout << "\nWhat is your full name? ";
    cin.getline(name1, 30);

    cout << "\n\nWhat is your friend's full name? ";
    getline(cin, name2);

    cout << "name1: " << name1 << endl;
    cout << "name2: " << name2 << endl;

    strcpy(name1, "SCOUT");
    name2 = "JACK";

    for(int i = 0; i < strlen(name1); i++) {
        cout << name1[i] << "*";
    }

    cout << endl;

    for(int i = 0; i < name2.length(); i++) {
        cout << name2.at(i) << "*";
    }

    return 0;
}