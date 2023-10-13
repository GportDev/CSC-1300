/*
    Title: LAB 2
    Authors: Gabriel Porteiro and Franklin Doane
    Date: 08-31-2023
    Purpose: Calculate the number of energy drinkers in the survey, and the number of these that prefer citrus.
*/

#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    const int PEOPLE_SURVEY = 16500;
    const double ENERGY_DRINKERS_PERCENT = 0.15;
    const double DRINKERS_WHO_PREFER_CITRUS = 0.58;

    double drinkersInSurvey = PEOPLE_SURVEY * ENERGY_DRINKERS_PERCENT;
    double citrusDrinkersInSurvey = drinkersInSurvey * DRINKERS_WHO_PREFER_CITRUS;


    cout << "The approximate number of customers in the survey who purchase one or more energy drinks per week: " << fixed << setprecision(0) << drinkersInSurvey << endl << endl;
    cout << "The approximate number of customers in the survey who prefer citrus-flavored energy drinks: " << fixed << setprecision(0) << citrusDrinkersInSurvey << endl << endl;

    return 0;
}
