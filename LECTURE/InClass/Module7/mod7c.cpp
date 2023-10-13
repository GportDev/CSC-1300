/*
    Title: Mod7b
    Author: Gabriel Porteiro
    Date: 10/02/2023
    Purpose: Give a gift based on lottery
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

bool luckyguess(int);
void getUserData(string&, string&, int&);


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

void getUserData(string& name, string &food, int &number) {

    cout << "What is your full name? ";
    getline(cin, name);

    cout << "What is your favorite food? ";
    getline(cin, food);

    cout << "What is you favorite number? ";
    cin >> number;
}


bool luckyguess(int userNumber) {
    srand(time(0));

    int randomNumber = rand() % 100 + 1;

    cout << "\n\nRandom number: " << randomNumber << endl;

    if (abs(userNumber - randomNumber) <= 25) {
        return true;
    } else {
        return false;
    }
}