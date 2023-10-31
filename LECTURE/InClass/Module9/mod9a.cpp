/*
    Title: Mod9a.cpp
    Author: Gabriel Porteiro
    Date: 10/30/2023
    Purpose: Learn about pointers
*/

#include <iostream>

using namespace std;

int main() {
    double number = 7.25;
    double *doubleptr = nullptr;

    doubleptr = &number;

    cout << "The value of num is " << *doubleptr << endl;

    return 0;
}