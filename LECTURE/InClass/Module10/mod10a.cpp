/*
    Title: Mod10A.cpp
    Author: Gabriel Porteiro
    Date: 13/11/2023
    Purpose: Training the use of structures
*/

#include <iostream>
#include <string>

using namespace std;

struct Song {
    string name, artist;
    double length;
};

int main() {

    Song music;

    cout << "Please, enter the data for your song.\n" << endl;

    cout << "SONG NAME: ";
    getline(cin, music.name);

    cout << "ARTIST: ";
    getline(cin, music.artist);

    cout << "SONG LENGTH: ";
    cin >> music.length;

    cout << "\n\nThe song you entered is..." << endl;

    cout << "Name: " << music.name << endl;
    cout << "Artist: " << music.artist << endl;
    cout << "Length: " << music.length << endl;

    return 0;
}