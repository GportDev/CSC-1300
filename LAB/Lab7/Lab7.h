/*
    Author: Gabriel Porteiro
    Title: header.h
    Date: 10/19/2023
    Purpose: Hold the components of the program, like #includes, global const, functions prototypes.
*/

#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>

using namespace std;

void getData(string&, string&, int&, int&, string&, string&);
bool calculateResults(string, string, int, int, string, string);

#endif