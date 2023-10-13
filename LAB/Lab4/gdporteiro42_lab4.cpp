/*
    Title: gdporteiro42_lab4.cpp
    Author: Gabriel Porteiro
    Data: 09/24/2023
    Purpose: Translate abbreviation of messages input by the user.

    OBS: I made this only with lecture knowledge, no arrays, functions or methods. So, there are a lot of ifs... 
*/

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

using namespace std;

int main() {

    // The message that the user want to decode
    string userInput;

    // The decoded message
    string expandedInput;

    // The number of string that were decoded
    int expandedStrings;

    // The number of strings expanded while the program is running
    int totalExpandedStrings;

    // The variable that control the while, yes or no
    char repeatHandle = 'y';

    // The position of the substring that was found
    int position;
    

    while(repeatHandle == 'y') {
        cout << "\nType your message: ";

        getline(cin, userInput);
        
        cout << "You entered: " << userInput << endl;

        expandedStrings = 0;

        //Loop to verify the string as much times as the number of characters, to get all the abbreviations in the phrase
        for(int i = 0; i < userInput.length(); i++) {

            // Block of branches that will match the abbreviations and replace them
            if((position = userInput.find("BFF")) != string::npos){
                expandedInput = userInput.replace(position, 3, "Best Friends Forever");
                expandedStrings++;
            }
            
            if((position = userInput.find("IDK")) != string::npos) {
                expandedInput = userInput.replace(position, 3, "I don\'t know");
                expandedStrings++;
            } 
            
            if((position = userInput.find("JK")) != string::npos) {
                expandedInput = userInput.replace(position, 2, "just kidding");
                expandedStrings++;
            } 
            
            if((position = userInput.find("TMI")) != string::npos) {
                expandedInput = userInput.replace(position, 3, "too much information");
                expandedStrings++;
            } 
            
            if((position = userInput.find("TTYL")) != string::npos) {
                expandedInput = userInput.replace(position, 4, "talk to you later");
                expandedStrings++;
            } 
            
            if((position = userInput.find("YMMD")) != string::npos) {
                expandedInput = userInput.replace(position, 4, "you made my day");
                expandedStrings++;
            } 
            
            if((position = userInput.find("W8")) != string::npos) {
                expandedInput = userInput.replace(position, 2, "wait");
                expandedStrings++;
            } 
            
            if((position = userInput.find("QT")) != string::npos) {
                expandedInput = userInput.replace(position, 2, "cutie");
                expandedStrings++;
            } 
            
            if((position = userInput.find("AYTMTB")) != string::npos) {
                expandedInput = userInput.replace(position, 6, "and you\'re telling me this because");
                expandedStrings++;
            } 

            //My custom abbreviation
            if((position = userInput.find("TMMH")) != string::npos) {
                expandedInput = userInput.replace(position, 6, "that makes me happy!");
                expandedStrings++;
            } 
        }

        cout << "Expanded: " << expandedInput << endl;

        cout << "\nNumber of abbreviations expanded: " << expandedStrings << endl;
        cout << "Do you want to encode another message? (y or n): ";

        //Every time the user choose to run again, the total will be incremented, so we can show the running total by the end of the execution, like a reducer
        totalExpandedStrings += expandedStrings;
        cin >> repeatHandle;

        //Since we have a getline in the beginning of the program, we need to prevent the enter skip like that
        cin.ignore();
    }

    cout << "\n\n*********************************************************************" << endl;
    cout << "I expanded " << totalExpandedStrings << " abbreviations during running this program." <<endl;
    cout << "*********************************************************************" << endl;

    return 0;
}