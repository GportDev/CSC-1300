/*
    Title: Mod7d
    Author: Gabriel Porteiro
    Date: 10/06/2023
    Purpose: Use different files to create a single program
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "functions.cpp";
#include "luckyguess.h";

using namespace std;

int main() {
    string fullName;
    string favFood;
    int favNumber;

    getUserData(fullName, favFood, favNumber);

    if(luckyguess(favNumber)) {
        cout << fullName << ", you will get a lifetime supply of " << favFood << "!" << endl;
    } else {
        cout << fullName << ", sorry, you get no " << favFood << "." << endl;
    }
}
