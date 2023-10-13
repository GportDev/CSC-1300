/*
    Title: Mod6a.cpp
    Author: Gabriel Porteiro
    Date: 09/22/2023
    Purpose: Learn how to use file methods
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream file;

    file.open("mod6a.txt");

    file << "GportDev." << endl;
    file << "2027." << endl;
    file << "I cannot smell anything." << endl;

    file.close();

    cout << "Done writting to file" << endl;

    return 0;
}