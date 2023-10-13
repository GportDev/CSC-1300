/*
    Title: Lab6 - Gringotts bank
    Author: Gabriel Porteiro
    Date: 10/05/2023
    Purpose: A program for the Gringotts Bank
*/

#include <iostream>
#include <string>

using namespace std;

// Define the function prototypes
int displayMenuGetChoice();
void goblinSickDays();
void displayCoolMessage();

int main() {
    // 1st display a menu giving the manager three options: 
    int choice = 0;

    while (choice != 3) {
        choice = displayMenuGetChoice();

        // Given the choice in the menu, the user will see a different message
        switch (choice) {
        case 1:
            goblinSickDays();
            break;
        case 2:
            displayCoolMessage();
            break;
        case 3:
            cout << "Good bye my friend" << endl;
            break;
        default:
            cout << "\n\nThis is not a good choice, try again..." << endl;
            break;
        }
    }

    return 0;
}

int displayMenuGetChoice() {

    int managerChoice;

    // Output the menu message
    cout << "\n\nWELCOME TO GRINGOTT's BANK!" << endl;
    cout << "   1 - Enter Goblin Sick Days" << endl;
    cout << "   2 - Display Something Cool" << endl;
    cout << "   3 - End the Program" << endl << endl;

    cout << "CHOICE: ";
    cin >> managerChoice;

    return managerChoice;
}


void goblinSickDays() {
    int globlinsThatWorked;
    int daysOutSick;
    int totalDaysOutSick = 0;

    cout << "How many Goblin tellers worked at Gringotts during each of the last three years? ";
    cin >> globlinsThatWorked;

    // Keep asking the days out for every goblin in each year
    for(int globinIndex = 1; globinIndex <= globlinsThatWorked; globinIndex++) {
        for(int year = 1; year <= 3; year++) {
            cout << "How many sick days was Goblin " << globinIndex << " out for, during year " << year << " ? " << endl;
            cin >> daysOutSick;

            totalDaysOutSick += daysOutSick;
        }
    }

    cout << "The " << globlinsThatWorked << " Goblins were out sick for a total of " << totalDaysOutSick << " days during the last 3 years" << endl;
}


void displayCoolMessage() {
    cout << "  /$$$$$$   /$$$$$$   /$$$$$$          /$$    /$$$$$$   /$$$$$$   /$$$$$$ " << endl;
    cout << " /$$__  $$ /$$__  $$ /$$__  $$       /$$$$   /$$__  $$ /$$$_  $$ /$$$_  $$" << endl;
    cout << "| $$  \\__/| $$  \\__/| $$  \\__/      |_  $$  |__/ \\ $$| $$$$\\ $$| $$$$\\ $$" << endl;
    cout << "| $$      |  $$$$$$ | $$              | $$     /$$$$$/| $$ $$ $$| $$ $$ $$" << endl;
    cout << "| $$       \\____  $$| $$              | $$    |___  $$| $$\\ $$$$| $$\\ $$$$" << endl;
    cout << "| $$    $$ /$$  \\ $$| $$    $$        | $$   /$$  \\ $$| $$ \\ $$$| $$ \\ $$$" << endl;
    cout << "|  $$$$$$/|  $$$$$$/|  $$$$$$/       /$$$$$$|  $$$$$$/|  $$$$$$/|  $$$$$$/" << endl;
    cout << " \\______/  \\______/  \\______/       |______/ \\______/  \\______/  \\______/" << endl;
}

