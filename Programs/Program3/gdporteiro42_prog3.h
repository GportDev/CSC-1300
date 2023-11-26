/*
    Title: gdporteiro42_prog3.h
    Author: Gabriel Porteiro
    Date: 10/31/2023
    Purpose: File that serve as header file of Program 3
*/

#ifndef PROG3_H
#define PROG3_H

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

//***** CONSTANT VARIABLES
const float OompaCost = 7.5;

//***** FUNCTION PROTOTYPES
void addCandy(int&, int [], string [], float [], int [], float[]);
void calculateTotals(int, int, int [], int [], float [], float[], string[]);
void calculateProfit(int, int, int [], float [], float []);
float calculatePrice(float, int);
float getMaxPrice(int, float [], int&);

#endif