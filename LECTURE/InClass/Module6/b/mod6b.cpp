/*
    Title: Mod6b.cpp
    Author: Gabriel Porteiro
    Data: 09/25/2023
    Purpose: Read inputs from a file
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

    ifstream inputFile;
    string outputLine;

    inputFile.open("mod6b.txt");

    if(inputFile.is_open()) {
        getline(inputFile, outputLine);
        cout << outputLine << endl;

        for(int i = 0; i < 5; i++) {
            inputFile >> outputLine;
            cout << outputLine << endl;;
        }

    } else {
        cout << "No such file in the folder" << endl;
    }

    return 0;
}