/*
    Title: lab9c.cpp
    Author: Gabriel Porteiro
    Date: 11/02/2023
    Purpose: Training the use of vectors
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int sumAccumulator = 0;
    int min = 0;
    int temp = 0;
    vector<int> values;

    // Because of a MacOS error we need to populate the vector with the values one by one
    values.push_back(7);
    values.push_back(4);
    values.push_back(36);
    values.push_back(1);
    values.push_back(3);
    values.push_back(6);
    values.push_back(2);
    values.push_back(99);
    values.push_back(77);
    values.push_back(10);

    // Double the vector values
    for(int i = 0; i < 10; i++) {
        values.at(i) *= 2; 
    }

    // Print the doubled vector
    cout << "\nThe vector elements, multiplied by 2, are: ";
    for(int i = 0; i < 10; i++) {
        cout << values.at(i) << ' '; 
    }
    cout << endl;

    // Print out the sum of all values inside the vector
    cout << "\nThe total of all array elements is ";
    for(int i = 0; i < 10; i++) {
        sumAccumulator += values.at(i);
    }
    cout << sumAccumulator << endl;


    // Implementing the sort algorithm
    for(int i = 0; i < 9; i++) {
        min = i;
        for(int j = i+1; j < 10; j++) {
            if(values.at(j) < values.at(min)) {
                min = j;
            }
        }

        // Holds the first value, change for the next min, put the first into the min position
        temp = values.at(i);
        values.at(i) = values.at(min);
        values.at(min) = temp;
    }

    cout << "\nThe sorted vector elements are: ";
    for(int i = 0; i < 10; i++) {
        cout << values.at(i) << ' '; 
    }
    cout << endl;

    return 0;
}