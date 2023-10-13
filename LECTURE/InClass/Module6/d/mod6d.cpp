/*
    Title: Mod6d.cpp
    Author: Gabriel Porteiro
    Data: 09/25/2023
    Purpose: 
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile;
    string title, score, year, fileName;
    int counter = 1;

    cout << "\nWhat is the filename? (example.txt)";
    getline(cin, fileName);

    inputFile.open(fileName, ios::in);

    if(inputFile.good()) {
        while(getline(inputFile, title, '#')) {
            getline(inputFile, year, '#');
            getline(inputFile, score, '#');

            cout << "\n" << counter << ") Title: ";
            cout << title << ", Year: " << year;
            cout << ", Rotten tomatoes score: " << score;

            counter ++;
        }
    } else {
        cout << "\nSorry, " << fileName << " could not be open." <<  endl;
    }

    inputFile.close();
    

    return 0;
}