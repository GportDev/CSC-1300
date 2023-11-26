/*
    Title: Mod9b.cpp
    Author: Gabriel Porteiro
    Date: 11/01/2023
    Purpose: Training the use of pointer notation and array notations
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    const int SIZE = 10;
    string favFoods[SIZE], *favFoodsPtr;
    string selectedFood;

    favFoodsPtr = favFoods;
    
    cout << "Enter your favorite foods!" << endl;

    for(int i = 0; i < SIZE; i++) {
        cout << "FAVORITE FOOD " << i + 1 << ":";
        getline(cin, *(favFoodsPtr + i));
    }

    cout << "\n\nGreat, here's your list: \n" << endl;

    for(int i = 0; i < SIZE; i++) {
        cout << favFoods[i] << endl;
    }


    return 0;
}