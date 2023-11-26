/*
	Title:  	gdporteiro42_prog2.cpp
	Date:		10/17/2023
	Author:		Gabriel Porteiro
	Purpose:	Organized the three lists, dinosaurs, herbivorous and carnivorous.
*/

#include <iostream>
#include <fstream> 
#include <iomanip> 
#include <string>

using namespace std;

int carnOrHerb(string);
bool searchCarnivore(string);
bool searchHerbivore(string);
void printDino(ofstream&, ifstream&, string, int, int&);
bool overTenGrand(string);

int getStringBeforeTarget(size_t, string);
int getStringAfterTarget(size_t, string);
bool isDigitOrComma(char);
string removeCommas(string&);

int main() {

    // Accumulators
    int dinos = 0;
    int herbs = 0;
    int carns = 0;
    int notDinos = 0;
    int hugeDinos = 0;
    int dinoSaurus = 0;

    // Input File
    ifstream dinoDirFile;

    // Output files
    ofstream otherOutFile;
    ofstream carnOutFile;
    ofstream herbOutFile;

    string fileName;
    string animalName;
    int isCarnOrHerb;
    size_t saurusPosition;
    string dashLine(60, '-');


    // Open the correct input file
    cout << "What is the file you want to open? ";
    getline(cin, fileName);
    cout << "\n";

    dinoDirFile.open(fileName);

    // Check if the file was correctly opened
    while(!dinoDirFile.is_open()) {
        cout << "This archive cannot be open, please, try again.";
        cout << "What archive you want to open? ";
        getline(cin, fileName);
    }

    // Iterate the lines in the file to catch the data
    while(getline(dinoDirFile, animalName, '#')) {

        // Verify if the name contains saurus
        if((saurusPosition = animalName.find("saurus")) != string::npos) {
            dinoSaurus++;
        }

        // Verify animal's type
        isCarnOrHerb = carnOrHerb(animalName);

        switch (isCarnOrHerb) {
        // Carnivorous
        case 1:
            carns++;
            dinos++;

            carnOutFile.open("carnOutFile.txt", ios::app);
            printDino(carnOutFile, dinoDirFile, animalName, carns, hugeDinos);

            cout << animalName <<" is being printed to the CARNIVORE file!" << endl;

            carnOutFile.close();
            break;
        // Herbivorous
        case 2:
            herbs++;
            dinos++;

            herbOutFile.open("herbOutFile.txt", ios::app);
            printDino(herbOutFile, dinoDirFile, animalName, herbs, hugeDinos);

            cout << animalName <<" is being printed to the HERBIVORE file!" << endl;

            herbOutFile.close();
            break;
        // Other animals
        default:
            notDinos++;
            otherOutFile.open("otherOutFile.txt", ios::app);
            printDino(otherOutFile, dinoDirFile, animalName, notDinos, hugeDinos);

            cout << animalName <<" is being printed to the OTHER file!" << endl;

            otherOutFile.close();
            break;
        }
    }

    // Verify if the file is finished before close it
    if(dinoDirFile.eof()) {
        dinoDirFile.close();
    } else {
        cout << "Still processing the input file";
    }

    // Print the running totals
    cout << "\n" << dashLine << endl << endl;
    cout << setw(30) << right << "TOTAL DINOS:" << setw(3) << "  " << dinos << endl;
    cout << setw(30) << right << "TOTAL CARNIVORE DINOS:" << setw(3) << "  " << carns << endl;
    cout << setw(30) << right << "TOTAL HERBIVORE DINOS:" << setw(3) << "  " << herbs << endl;
    cout << setw(30) << right << "DINOS OVER 10,000 LBS:" << setw(3) << "  " << hugeDinos << endl;
    cout << setw(30) << right << "DINO NAMES END IN 'SAURUS':" << setw(3) << "  " << dinoSaurus << endl;
    cout << setw(30) << right << "ANIMALS NOT DINOS:" << setw(3) << "  " << notDinos << endl;
    cout << "\n" << dashLine << endl;

    return 0;
}

void printDino(ofstream& outFile, ifstream& inputFile, string animalName, int accumulator, int& hugeDinos) {
    string height;
    string mass;
    string foods;
    string description;

    // For each animal, the program needs to make 5 iterations, one for each attribute of the animal
    if(inputFile.is_open()){
        outFile << setw(14) << left << "DINOSAUR NAME: ";
        outFile << animalName << endl;

        getline(inputFile, height, '#');
        outFile << setw(14) << left << "HEIGHT/LENGTH: ";
        outFile << height << endl;

        getline(inputFile, mass, '#');

        // Check if the weight is over 10,000 lbs
        if(overTenGrand(mass)) {
            hugeDinos++;
        }
        outFile << setw(14) << left << "MASS: ";
        outFile << " " << mass << endl;

        getline(inputFile, foods, '#');
        outFile << setw(14) << left << "EATS: ";
        outFile << " " << foods << endl;

        getline(inputFile, description, '#');
        outFile << setw(14) << "DESCRIPTION: ";
        outFile << " " << description << endl << endl;
    }
}

int carnOrHerb(string animalName) {
    // Verify the type of the animal entered
    if(searchCarnivore(animalName)){
        return 1;
    } else if (searchHerbivore(animalName)) {
        return 2;
    } else {
        return -1;
    }
}

bool searchCarnivore(string animalName) {
    ifstream carnDirFile;
    string carnName;
    
    carnDirFile.open("carnivores.txt");
    if (!carnDirFile) {
        cout << "Failed to open carnivores.txt" << endl;
    }

    // Read each name with a while and check if the name from the file match with the received argument
    while(getline(carnDirFile, carnName, '#')) {
        if(carnName == animalName) {
            return true;
        }
    }

    carnDirFile.close();

    return false;
}

bool searchHerbivore(string animalName) {
    ifstream herbDirFile;
    string herbName;

    herbDirFile.open("herbivores.txt");
    if (!herbDirFile) {
        cout << "Failed to open herbivores.txt" << endl;
    }

    // Read each name with a while and check if the name from the file match with the received argument
    while(getline(herbDirFile, herbName, '#')) {
        if(herbName == animalName) {
            return true;
        }
    }

    herbDirFile.close();

    return false;
}

bool overTenGrand(string mass) {
    size_t stringToPosition;
    int numberBefore;
    int numberAfter;

    // Find the position of the substring "to"
    if((stringToPosition = mass.find("to")) == string::npos){
        return false;
    }

    // Use the position to get the number before the string "to"
    numberBefore = getStringBeforeTarget(stringToPosition, mass);
 
    // Use the position to get the number before the string "to"
    numberAfter = getStringAfterTarget(stringToPosition, mass);

    // Verify if the mass is bigger than 10,000 lbs (Even when the number is out of order)
    if(numberBefore >= 10000 || numberAfter >= 10000) {
        return true;
    } else {
        return false;
    }
}

int getStringBeforeTarget(size_t targetPosition, string targetString) {
    size_t stringStart;
    string numberString;
    string numberWithoutCommas;
    int convertedNumber = 0;

    stringStart = targetString.rfind(" ", targetPosition - 2);

    // Create a substring that will be converted into a integer
    numberString = targetString.substr(stringStart + 1, targetPosition - stringStart - 2);
    numberWithoutCommas = removeCommas(numberString);
    
    // Convert the substring into a integer
    if (!numberWithoutCommas.empty()) {
        convertedNumber = stoi(numberWithoutCommas);
        return convertedNumber;
    } else {
        cout << "Error: Invalid number string: " << numberWithoutCommas << endl;
        return 0;
    }

}

int getStringAfterTarget(size_t targetPosition, string targetString) {
    size_t stringStart;
    size_t stringEnd;
    string numberString;
    string numberWithoutCommas;
    int convertedNumber = 0;

    stringStart = targetPosition + 3;
    stringEnd = stringStart;

    // Iterate until found the begging and the end of this subtring number
    while (stringEnd < targetString.length() && isDigitOrComma(targetString[stringEnd])) {
        stringEnd++;
    }

    // Create a substring that will be converted into a integer
    numberString = targetString.substr(stringStart, stringEnd - stringStart);
    numberWithoutCommas = removeCommas(numberString);

    // Convert the substring into a integer
    if (!numberWithoutCommas.empty()) {
        convertedNumber = stoi(numberWithoutCommas);
        return convertedNumber;
    } else {
        cout << "Error: Invalid number string: " << numberWithoutCommas << endl;
        return 0;
    }
}

bool isDigitOrComma(char digit) {
    // Verify if the digit entered is a digit or a comma
    if((digit >= '0' && digit <= '9') || digit == ',') {
        return true;
    } else {
        return false;
    }
}

string removeCommas(string& target) {
    string result;
    char digit;

    // Create a new strinng whitout thousand commas
    for(int i = 0; i < target.length(); i++) {
        digit = target[i];

        if(digit != ',') {
            result += digit;
        }
    }

    return result;
}
