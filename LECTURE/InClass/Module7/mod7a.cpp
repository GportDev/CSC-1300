/*
    Title: Mod7a
    Author: Gabriel Porteiro
    Date: 10/02/2023
    Purpose: Output the amount of digits and special characters of a user input
*/

#include <iostream>
#include <string>

using namespace std;


void countCharacters(string input, int controller) {
    int digitsCounter = 0;

    if(controller == 1) {
        for(int i = 0; i < input.length(); i++) {

            if(isdigit(input.at(i))){
                digitsCounter++;
            };

        }
        cout << "\n\nThe number of digits is: " << digitsCounter << endl;

    } else if(controller == 2) {
        int specials = 0;
        for(int i = 0; i < input.length(); i++) {
            if(ispunct(input.at(i))) {
                specials++;
            }
        }
        cout << "\n\nThe number of special characters is: " << specials << endl;
    }
}

int main() {
    string userInput;

    cout << "Enter in a string: ";
    getline(cin, userInput);
    countCharacters(userInput, 1);
    countCharacters(userInput, 2);
    return 0;
}