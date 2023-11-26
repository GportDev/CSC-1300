/*
    Title: Mod10c.cpp
    Author: Gabriel Porteiro
    Date: 11/17/2023
    Purpose: Pointers to structures
*/

#include <iostream>
#include <string>

using namespace std;

struct Phone {
    string type;
    string color;
    float capacity;
};

const int SIZE = 3;

void addPhone(Phone* phones) {
    for(int i = 0; i < SIZE; i++) { 
        cout << "\n\nPHONE " << i + 1 << endl;
        cout << "PHONE TYPE:  ";
        getline(cin, phones[i].type);

        cout << "PHONE COLOR:  ";
        getline(cin, phones[i].color);

        cout << "PHONE CAPACITY (in GB):  ";
        cin >> phones[i].capacity;
        cin.ignore();
    }
}

void printArray(Phone* phones) {
    for(int i = 0; i < SIZE; i++) {
        cout << "\n\nPhone: \t" << phones[i].type << endl;
        cout << "Color: \t" << phones[i].color << endl;
        cout << "Capacity: \t" << phones[i].capacity << endl;
    }
}

int main() {
    Phone *phones = new Phone [SIZE];

    addPhone(phones);

    printArray(phones);

    delete [] phones;

    return 0;
}