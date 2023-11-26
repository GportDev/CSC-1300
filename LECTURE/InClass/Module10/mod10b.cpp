/*
    Title: Mod10b.cpp
    Author: Gabriel Porteiro
    Date: 11/15/2023
    Purpose: Training nested structures
*/

#include <iostream>
#include <string>

using namespace std;

struct CarInfo {
    string make;
    string model;
    int year;
};

struct Car {
    CarInfo infos;
    string color;
    double cost;
};

int main() {
    Car cars[3];

    for(int i = 0; i < 3; i++) {
        cout << "Enter data for car " << i + 1 << ": " << endl;

        cout << "Make? ";
        getline(cin, cars[i].infos.make);

        cout << "Model? ";
        getline(cin, cars[i].infos.model);

        cout << "Year? ";
        cin >> cars[i].infos.year;
        cin.ignore();

        cout << "Color? ";
        getline(cin, cars[i].color);

        cout << "Cost? ";
        cin >> cars[i].cost;
        cin.ignore();
    }

    cout << "\n\nEntered cars" << endl;

    for(int i = 0; i < 3; i++) {
        cout << "\nData for car " << i + 1 << ": " << endl;
        cout << "Make: " << cars[i].infos.make << endl;
        cout << "Model: " << cars[i].infos.model << endl;
        cout << "Year: " << cars[i].infos.year << endl;
        cout << "Color: " << cars[i].color << endl;
        cout << "Cost: " << cars[i].cost << endl;
    }

    return 0;
}