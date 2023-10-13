#include <iostream>
#include <string>

using namespace std;

void getUserData(string& name, string &food, int &number) {

    cout << "What is your full name? ";
    getline(cin, name);

    cout << "What is your favorite food? ";
    getline(cin, food);

    cout << "What is you favorite number? ";
    cin >> number;
}