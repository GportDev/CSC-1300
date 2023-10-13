/*
    Title: Module 3 a
    Author: Gabriel Porteiro 
    Date: 08-30-2023
    Purpose: Perform calculation in different orders
*/

#include <iostream>
using namespace std;

int main() {
    int result;

    result = 6 - 3 * 2 + 7 - 1 + 17 % 2;
    cout << "The result of 6 - 3 * 2 + 7 - 1 + 17 % 2 is: " << result << endl;

    result = (6 - 3) * 2 + (7 - 1) + 17 % 2;
    cout << "The result of (6 - 3) * 2 + (7 - 1) + 17 % 2 is: " << result << endl;

    return 0;
}