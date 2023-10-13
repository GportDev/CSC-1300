#include <iostream>
using namespace std;

int main() {
    string fav_color;
    int fav_number;

    cout << "\nWhat is your favorite color? ";
    cin >> fav_color;
    cout << "What is your favorite number? ";
    cin >> fav_number;

    cout << "\nYour favorite color is " << fav_color << " and favorite number is " << fav_number << endl;

    return 0;
}