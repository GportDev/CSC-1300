/*
    Title: LAB 2
    Authors: Gabriel Porteiro and Franklin Doane
    Date: 08-31-2023
    Purpose: Get the user name and print the authors name with some fun facts, after that calculate the circle area from a given radius inserted by user
*/

#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    double radius;
    const double PI = 3.14;

    //print welcome message after getting user's name
    cout << "What is your name? ";
    cin >> name;
    cin.ignore();
    cout << "\nHi, " << name << ", welcome to this program!\n\n";

    //introduce lab partners and tell fun facts about yourselves
    cout << "Our names are Franklin and Gabriel.\n\n";
    cout << "A fun fact about Franklin is I like BJJ.\n\n";
    cout << "A fun fact about Gabriel is I'm lost my sense of smell.\n\n";

    //calculate the area of user's circle
    cout << "What is the radius of your circle? ";
    cin >> radius;
    double area = PI * pow(radius, 2.0);
    cout << "\nThe area of your circle is " << area << endl << endl;
    return 0;
}