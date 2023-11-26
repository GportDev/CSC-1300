/*
    Title: Functions.cpp
    Author: Gabriel Porteiro
    Date: 11/16/2023
    Purpose: Hold the functions of all program
*/

#include "prog4.h"

// Enter Vehicle function -> Used to add a vehicle into the database (Array)
int enterVehicle(int& vehiclesLoaded, Vehicle vehicles[]) {
    int userChoice = 0;
    string fileName;
    ifstream inputVehicles;
    int vehicleIndex = 0;

    string hasWeapons;
    string hours;
    string costPerHour;
    string costForParts;
    string costOfMaterials;

    if(vehiclesLoaded < 100){
        cout << "\nWhat would you like to do? " << endl;

        // Add vehicles menu
        cout << "\t1. Load my Vehicles from a file." << endl;
        cout << "\t2. Enter one Vehicle manually." << endl;
        cout << "\tChoose 1 or 2." << endl;

        cout << "\nCHOICE:   ";
        cin >> userChoice;
        cin.ignore();

        while(userChoice <= 0 || userChoice > 2) {
            cout << "You should choose 1 or 2: ";
            cin >> userChoice;
            cin.ignore();
        }

        if(userChoice == 1) {
            // Open the file that the vehicle comes from
            cout << "\nWhat is the name of the file with your list of vehicles? (ex: filename.txt)" << endl;
            cout << "FILENAME:   ";
            getline(cin, fileName);

            inputVehicles.open(fileName);

            // Check if the file was correctly opened
            while(!inputVehicles.is_open()) {
                cout << "This archive cannot be open, please, try again.";
                cout << "\nWhat archive you want to open? ";
                getline(cin, fileName);
            }

            if(inputVehicles.good()){
                while(getline(inputVehicles, vehicles[vehicleIndex].name, '#')) {

                    // Get the name of the vehicle and insert this into the array
                    getline(inputVehicles, vehicles[vehicleIndex].description, '#');

                    // Get the string that contains a number that represents if the vehicle has weapons or not
                    getline(inputVehicles, hasWeapons, '#');

                    // Since this property is a boolean, we need to convert it from string to true or false
                    if(hasWeapons == "1") {
                        vehicles[vehicleIndex].hasWeapons = true;
                    } else {
                        vehicles[vehicleIndex].hasWeapons = false;
                    }

                    // Get the string that show the amount of hours to repair the vehicle, convert it and insert into the array
                    getline(inputVehicles, hours, '#');
                    vehicles[vehicleIndex].repairCost.hours = convertToFloat(hours);

                    // Get the string that show the cost per hour to repair the vehicle, convert it and insert into the array
                    getline(inputVehicles, costPerHour, '#');
                    vehicles[vehicleIndex].repairCost.costPerHour = convertToFloat(costPerHour);

                    // Get the string that show the cost for parts to repair the vehicle, convert it and insert into the array
                    getline(inputVehicles, costForParts, '#');
                    vehicles[vehicleIndex].repairCost.costForParts = convertToFloat(costForParts);

                    // Get the string that show the cost of the materials to repair the vehicle, convert it and insert into the array
                    getline(inputVehicles, costOfMaterials, '#');
                    vehicles[vehicleIndex].repairCost.costOfMaterials = convertToFloat(costOfMaterials);

                    // Add a vehicle to the total
                    vehiclesLoaded++;

                    // Update the index to add a new entity into the array
                    vehicleIndex++;
                }
            }

            cout << "\nAll vehicles from vehicle.txt have been added to the program." << endl;
        } else {
            char loopController = 'y';

            while(loopController == 'y') {

                cout << "\n\nNAME: ";
                getline(cin, vehicles[vehicleIndex].name);

                // Get the name of the vehicle and insert this into the array
                cout << "\nDESCRIPTION: ";
                getline(cin, vehicles[vehicleIndex].description);

                // Get the string that contains a number that represents if the vehicle has weapons or not
                cout << "\nDOES THIS VEHICLE HAVE WEAPONS? (y or n): ";
                getline(cin, hasWeapons);

                
                // Validate user's input
                while(hasWeapons != "y" && hasWeapons != "Y" && hasWeapons != "n" && hasWeapons != "N"){
                    cout << "Please, enter a valid response (y or n)" << endl;
                    cout << "\nDOES THIS VEHICLE HAVE WEAPONS? (y or n): ";
                    getline(cin, hasWeapons);
                }

                // Since this property is a boolean, we need to convert it from string to true or false
                if(hasWeapons == "y" || hasWeapons == "Y") {
                    vehicles[vehicleIndex].hasWeapons = true;
                } else {
                    vehicles[vehicleIndex].hasWeapons = false;
                }

                // Get the string that show the amount of hours to repair the vehicle, convert it and insert into the array
                cout << "\nHow many hours do you spend repairing the " << vehicles[vehicleIndex].name << "?" << endl;

                cout << "NUM HOURS: ";
                getline(cin, hours);
                vehicles[vehicleIndex].repairCost.hours = convertToFloat(hours);

                // Get the string that show the cost per hour to repair the vehicle, convert it and insert into the array
                cout << "\nWhat is the cost per hour for repairing for the " << vehicles[vehicleIndex].name << "?" << endl;

                cout << "COST PER HOUR: $";
                getline(cin, costPerHour);
                vehicles[vehicleIndex].repairCost.costPerHour = convertToFloat(costPerHour);


                // Get the string that show the cost for parts to repair the vehicle, convert it and insert into the array
                cout << "\nHow much money do you spend on part for the " << vehicles[vehicleIndex].name << "?" << endl;

                cout << "PART COST: $";
                getline(cin, costForParts);
                vehicles[vehicleIndex].repairCost.costForParts = convertToFloat(costForParts);

                // Get the string that show the cost for materials to repair the vehicle, convert it and insert into the array
                cout << "\nHow much money do you spend on supplies for the " << vehicles[vehicleIndex].name << "?" << endl;

                cout << "SUPPLY COST: $";
                getline(cin, costOfMaterials);
                vehicles[vehicleIndex].repairCost.costOfMaterials = convertToFloat(costOfMaterials);

                cout << "\n\nThe " << vehicles[vehicleIndex].name << " has been added." << endl;

                // Add a vehicle to the total
                vehiclesLoaded++;

                // Update the index to add a new entity into the array
                vehicleIndex++;

                cout << "\nWant to add more vehicles? (y or n): ";
                cin >> loopController;
                cin.ignore();
            }
        }

        return vehiclesLoaded;
    } else {
        cout << "Sorry, our garage is already full. You are not allowed to add more vehicles now." << endl;
        return 0;
    }
}

// Delete a vehicle from the database (array)
int deleteVehicle(int& vehiclesLoaded, Vehicle vehicles[]) {
    string vehicleName;

    cout << "\nThe following is a list of all the vehicles you take care of:" << endl;

    for(int i = 0; i < vehiclesLoaded; i++) {
        cout << vehicles[i].name << endl;
    }

    cout << "\n\nWhat vehicle do you wish to remove?" << endl;
    cout << "VEHICLE NAME: ";
    getline(cin, vehicleName);

    if(moveArrayElements(vehicleName, vehiclesLoaded, vehicles)) {
        cout << "\nYou have removed " << vehicleName << "." << endl;
        vehiclesLoaded--;
    } else {
        cout << "\nSorry, a vehicle by the name " << vehicleName << " could not be found." << endl;
    }

    return vehiclesLoaded;
}

// Move Array Elements, will get the index of the element that should be deleted and move the next positions to cover the absence of the removed vehicle
bool moveArrayElements(string vehicleName, int& vehiclesLoaded, Vehicle vehicles[]) {
    int vehicleIndex = -1;
    for(int i = 0; i < vehiclesLoaded; i++) {
        if(vehicles[i].name == vehicleName) {
            vehicleIndex = i;
        }
    }

    // If the index never change, the function didn't found the vehicle
    if(vehicleIndex == -1) {
        return false;
    } else {

        // Overwrite the elements moving each cell to the left
        for(int i = vehicleIndex; i < vehiclesLoaded; i++){
            vehicles[vehicleIndex].name = vehicles[vehicleIndex + 1].name;
            vehicles[vehicleIndex].description = vehicles[vehicleIndex + 1].description;
            vehicles[vehicleIndex].hasWeapons = vehicles[vehicleIndex + 1].hasWeapons; 
            vehicles[vehicleIndex].repairCost.hours = vehicles[vehicleIndex + 1].repairCost.hours;
            vehicles[vehicleIndex].repairCost.costPerHour = vehicles[vehicleIndex + 1].repairCost.costPerHour;
            vehicles[vehicleIndex].repairCost.costForParts = vehicles[vehicleIndex + 1].repairCost.costForParts;
            vehicles[vehicleIndex].repairCost.costOfMaterials = vehicles[vehicleIndex + 1].repairCost.costOfMaterials;
        }

        return true;
    }
}


// Print vehicles either on the screen or in a text file
void printVehicles(int& vehiclesLoaded, Vehicle vehicles[]) {
    int printChoice;
    string fileName;
    ofstream outputFile;

    cout << fixed;

    cout << "What would you like to do?" << endl;

    // Menu
    cout << "\t1. Print vehicle to the screen." << endl;
    cout << "\t2. Print vehicle to a file." << endl;
    cout << "\tChoose 1 or 2." << endl;

    cout << "CHOICE:  ";
    cin >> printChoice;
    cin.ignore();

    while(printChoice < 1 || printChoice > 2) {
        cout << "Please, select between 1 and 2";
        cout << "CHOICE:  ";
        cin >> printChoice;
        cin.ignore();
    }

    if(printChoice == 1) {
        for(int i = 0; i < vehiclesLoaded; i++){
            cout << "\n------------------------------------------------------------------------" << endl;
            cout << "VEHICLE " << i + 1 << ":" << endl;
            cout << "Name: \t" << vehicles[i].name << endl;
            cout << "Description: " << endl;
            cout << "\t" << vehicles[i].description << endl << endl;

            if(vehicles[i].hasWeapons) {
                cout << "Has weapons? \t yes" << endl;
            } else {
                cout << "Has weapons? \t no" << endl;
            }

            cout << "Number of Hours to repair the Vehicle: " << setprecision(1) << vehicles[i].repairCost.hours << endl;
            cout << "Cost Per Hour: $ " << setprecision(2) << vehicles[i].repairCost.costPerHour << endl;
            cout << "Cost for Parts: $ " << setprecision(2) << vehicles[i].repairCost.costForParts << endl;
            cout << "Supplies cost: $ " << setprecision(2) << vehicles[i].repairCost.costOfMaterials << endl;
            cout << endl << endl;
        }
    } else {
        cout << "\nWhat is the name of your file you wish to write to?" << endl;
        cout << "FILENAME:  ";
        getline(cin, fileName);

        outputFile << fixed;

        outputFile.open(fileName);

        if(outputFile.good()) {
            for(int i = 0; i < vehiclesLoaded; i++) {
                outputFile << "\n------------------------------------------------------------------------" << endl;
                outputFile << "VEHICLE " << i + 1 << ":" << endl;
                outputFile << "Name: \t" << vehicles[i].name << endl;
                outputFile << "Description: " << endl;
                outputFile << "\t" << vehicles[i].description << endl << endl;

                if(vehicles[i].hasWeapons) {
                    outputFile << "Has weapons? \t yes";
                } else {
                    outputFile << "Has weapons? \t no";
                }

                outputFile << "Number of Hours to repair the Vehicle: " << setprecision(1) << vehicles[i].repairCost.hours << endl;
                outputFile << "Cost Per Hour: $ " << setprecision(2) << vehicles[i].repairCost.costPerHour << endl;
                outputFile << "Cost for Parts: $ " << setprecision(2) << vehicles[i].repairCost.costForParts << endl;
                outputFile << "Supplies cost: $ " << setprecision(2) << vehicles[i].repairCost.costOfMaterials << endl;
                outputFile << endl << endl;
            }
        }

        cout << "Your vehicles have been entered into " << fileName << endl;
    }
}

// Print Statistics, will print out the total costs for each vehicles and for the whole garage
void printStatistics(int& vehiclesLoaded, Vehicle vehicles[]) {
    float vehicleCost = 0.00;
    float totalCost = 0.00;

    cout << fixed;

    cout << "\nCOST OF EACH VEHICLE:\n" << endl;

    cout << setw(20) << left << "VEHICLE" << setw(3) << left << " " << setw(16) << right << "COST" << endl;

    for(int i = 0; i < vehiclesLoaded; i++) {
        vehicleCost = (vehicles[i].repairCost.hours * vehicles[i].repairCost.costPerHour) + vehicles[i].repairCost.costForParts + vehicles[i].repairCost.costOfMaterials;

        cout << setw(20) << left << vehicles[i].name << setw(3) << left << "$" << setw(20) << right << setprecision(2) << vehicleCost << endl;

        totalCost += vehicleCost;
    }

    cout << endl;
    cout << setw(20) << left << "TOTAL COST: " << setw(3) << left << "$" << setw(20) << right << setprecision(2) << totalCost << endl;
}

// Save Vehicles To File, will save all the data from the array into a text file
void saveVehiclesToFile(int& vehiclesLoaded, Vehicle vehicles[]) {
    string fileName;
    ofstream outputFile;
    int hasWeapons = -1;

    cout << "What is the name of the file you want to save your vehicles to?" << endl;
    cout << "FILENAME: ";
    getline(cin, fileName);

    outputFile.open(fileName);

    for(int i = 0; i < vehiclesLoaded; i++){
        if(vehicles[i].hasWeapons){
            hasWeapons = 1;
        } else {
            hasWeapons = 0;
        }

        outputFile << vehicles[i].name << "#" << vehicles[i].description << "#" << hasWeapons << "#" << vehicles[i].repairCost.hours << "#" << vehicles[i].repairCost.costPerHour << "#" << vehicles[i].repairCost.costForParts << "#" << vehicles[i].repairCost.costOfMaterials << "#";
    }

    cout << "Your Vehicles were successfully saved to the " << fileName << " file." << endl;
}

// Convert To Float, get a string and convert each char inside of it into a float number
float convertToFloat(string s) {
    istringstream i(s);
    float x;

    if (!(i >> x)){
        x = 0;
    }

    return x;
}