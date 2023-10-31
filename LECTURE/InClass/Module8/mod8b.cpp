/*
    Title: mod8b.cpp
    Author: Gabriel Porteiro
    Date: 10/23/2023
    Purpose: 
*/

#include <iostream>
#include <string>

using namespace std;

double findHighest(double [], int);
double findLowest(double [], int);
double findAverage(double [], int);

int main() {
    const int ARRAY_SIZE = 10;
    string products[ARRAY_SIZE];
    double prices[ARRAY_SIZE];
    int highest, lowest, average;


    cout << "Tell me " << ARRAY_SIZE << " useful things and their price: " << endl;

    for(int i = 0;i < ARRAY_SIZE; i++) {
        cout << "\nUSEFUL THING: ";
        getline(cin, products[i]);

        cout << "\nPRICE FOR THING: ";
        cin >> prices[i];

        cin.ignore();
    }

    cout << "Your list of useful itens include: ";

    for(int i = 0; i < ARRAY_SIZE; i++) {
        cout << products[i] << ', $'<< prices[i] << endl;
    }

    cout << "\n\n\n\n******RESULTS******\n";

    highest = findHighest(prices, ARRAY_SIZE);
    cout << "HIGHEST PRICE: " << products[highest] << "with price " << "$ " << prices[highest] << endl;

    lowest = findLowest(prices, ARRAY_SIZE);
    cout << "LOWEST PRICE: " << products[lowest] << "with price " << "$ " << prices[lowest] << endl;

    average = findLowest(prices, ARRAY_SIZE);
    cout << "LOWEST PRICE: " << products[lowest] << "with price " << "$" << prices[lowest] << endl;

    return 0;
}

double findHighest(double prices[], int size) {
    double highestPrice = prices[0];
    int highestIndex = 0;

    for(int i = 1; i < size; i++) {
        if(prices[i] > highestPrice) {
            highestPrice = prices[i];
            highestIndex = i;
        }
    }

    return highestIndex;
}

double findLowest(double prices[], int size) {
    double lowestPrice = prices[0];
    int lowestIndex = 0;

    for(int i = 1; i < size; i++) {
        if(prices[i] < lowestPrice) {
            lowestPrice = prices[i];
            lowestIndex = i;
        }
    }

    return lowestIndex;
}

double findAverage(double prices[], int size) {
    double lowestPrice = prices[0];
    int lowestIndex = 0;

    for(int i = 1; i < size; i++) {
        if(prices[i] < lowestPrice) {
            lowestPrice = prices[i];
            lowestIndex = i;
        }
    }

    return lowestIndex;
}