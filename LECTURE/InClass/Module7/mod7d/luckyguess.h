#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool luckyguess(int userNumber) {
    srand(time(0));

    int randomNumber = rand() % 100 + 1;

    cout << "\n\nRandom number: " << randomNumber << endl;

    if (abs(userNumber - randomNumber) <= 25) {
        return true;
    } else {
        return false;
    }
}