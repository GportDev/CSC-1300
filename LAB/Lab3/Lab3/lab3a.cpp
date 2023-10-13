/*
    Title: LAB 3 A
    Authors: Gabriel Porteiro
    Date: 09-14-2023
    Purpose: Read two inputs and compare each other.
*/

#include <iostream>

using namespace std;

int main() {
    int screenTime, studyTime;

    //Read the screen time user spend.
    cout << "Rounding to the nearest hour, how many hours is you daily average PHONE screen time?" << endl;
    cout << "AVG DAILY SCREEN-TIME HOURS: ";
    cin >> screenTime;

    //Read the study time user spend.
    cout << "\nRounding to the nearest hour, how many hours is your daily average study or homework time?" << endl;
    cout << "AVG DAILY STUDY or HOMEWORK HOURS: ";
    cin >> studyTime;
    
    //Compare times and output the properly phrase.
    if (screenTime <= 2 && studyTime >= 6) {
        cout << "\n\nYou need to socialize with people more often" << endl;
    } else if (screenTime >= 2 && studyTime >= 6) {
        cout << "\n\nYou need to socialize with people more often and get off that phone." << endl;
    } else if (screenTime <= 2 && (studyTime >= 2 && studyTime <= 6)) {
        cout << "\n\nYou manage time well" << endl;
    } else if (screenTime >= 2 && studyTime <= 6) {
        cout << "\n\nWhat are you going to do if you lose that phone?" << endl << "It is interfering with you ability to have a real life." << endl;
    }

    return 0;
}