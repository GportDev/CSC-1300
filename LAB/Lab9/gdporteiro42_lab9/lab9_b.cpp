/*
    Title: lab9b.cpp
    Author: Gabriel Porteiro
    Date: 11/02/2023
    Purpose: Training the use of pointers
*/

#include <iostream>

using namespace std;

int main() {
    int length, width, area;
    int *lengthPtr;
    int *widthPtr;

    lengthPtr = &length;
    widthPtr = &width;

    cout << "Please input the length of the rectangle" << endl;
    cin >> *lengthPtr;

    cout << "Please input the width of the rectangle" << endl;
    cin >> *widthPtr;

    area = *lengthPtr * *widthPtr;

    cout << "The area is " << area << endl;

    if(*lengthPtr > *widthPtr) {
        cout << "The length is greater than the width" << endl;
    } else if(*widthPtr > *lengthPtr) {
        cout << "The width is greater than the length" << endl;
    } else {
        cout << "The length and the width are the same" << endl;
    }

    return 0;
}