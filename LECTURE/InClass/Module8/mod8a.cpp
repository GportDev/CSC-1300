/*
    Title:
    Author:
    Date:
    Purpose:
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    const int SIZE = 10;
    string usefulThings[SIZE];
    double prices[SIZE];

    cout << "Tell me " << SIZE << " useful things and their price: " << endl;

    for(int i = 0;i < SIZE; i++) {
        cout << "\nUSEFUL THING: ";
        getline(cin, usefulThings[i]);

        cout << "\nPRICE FOR THING: ";
        cin >> prices[i];

        cin.ignore();
    }

    cout << "Your list of useful itens include: ";

    for(int i = 0; i < SIZE; i++) {
        cout << usefulThings[i] << ', $'<< prices[i] << endl;
    }

    return 0;
}