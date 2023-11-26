/*
    Title: Prog4.h
    Author: Gabriel Porteiro
    Date: 11/16/2023
    Purpose: Archive that contains the functions prototypes, constant variables and libraries
*/

#ifndef PROG4_H
#define PROG4_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

// Structures
struct Cost {
    float hours;
    float costPerHour;
    float costForParts;
    float costOfMaterials;
};

struct Vehicle {
    string name;
    string description;
    bool hasWeapons;
    Cost repairCost;
};

// Functions prototypes
int enterVehicle(int&, Vehicle []);
int deleteVehicle(int&, Vehicle []);

float convertToFloat(string);

bool moveArrayElements(string, int&, Vehicle []);

void printVehicles(int&, Vehicle []);
void printStatistics(int&, Vehicle []);
void saveVehiclesToFile(int&, Vehicle []);

#endif
