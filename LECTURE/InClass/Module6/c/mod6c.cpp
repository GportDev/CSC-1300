/*
    Title: Mod6c.cpp
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
    string title, score;
    int year, counter = 1;


    inputFile.open("movieData1_mac.txt");

    if(inputFile.good()) {
        while(getline(inputFile, title)) {
            inputFile >> year;
            inputFile.ignore();
            getline(inputFile, score);

            cout << "\n" << counter << ") Title: ";
            cout << title << ", Year: " << year;
            cout << ", Rotten tomatoes score: " << score;

            counter ++;
        }
    } else {
        cout << "\nFile could not be opened.\n";
    }

    inputFile.close();
    

    return 0;
}