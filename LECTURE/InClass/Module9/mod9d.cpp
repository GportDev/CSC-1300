/*
    Title: mod9d.coo
    Author: Gabriel Porteiro
    Date: 11/06/2023
    Purpose: Training the use of dynamic memory allocation
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int dogsAmount = 0;

    cout << "How many dogs can you adopt? ";
    cin >> dogsAmount;
    cin.ignore();

    string* dogNames = new string[dogsAmount];
    string* dogBreeds = new string[dogsAmount];
    int* dogAges = new int[dogsAmount];

    cout << "\n\n*****************************" << endl;
    cout << "Enter the dog data: " << endl;

    for(int i = 0; i < dogsAmount; i++) {
        cout << "**** DOG " << i + 1 << " ****" << endl;
        cout << "NAME:   ";
        getline(cin, *(dogNames + i)); // Or getline(cin, dogNames[i])

        cout << "BREED:   ";
        getline(cin, *(dogBreeds + i)); // Or getline(cin, dogBreeds[i]) 

        cout << "AGE:   ";
        cin >> *(dogAges + i); // Or cin >> dogAges[i]
        cin.ignore();
    }

    cout << "\n\n*****************************" << endl;
    cout << "Printing the dogs: " << endl;

    for(int i = 0; i < dogsAmount; i++) {
        cout << "**** DOG " << i + 1 << " ****" << endl;
        cout << "NAME:   " << *(dogNames + i) << endl;
        cout << "BREED:   " << *(dogBreeds + i) << endl;;
        cout << "AGE:   " << *(dogAges + i) << endl;
    }

    delete [] dogNames;
    delete [] dogBreeds;
    delete [] dogAges;

    return 0;
}