/*
	Title:  mod5b.cpp
	Date:  9/13/2023
	Author: Gabriel Porteiro
	Purpose: Generate a random number and compare it with a guess number input by the user, let the user run the program as many time they want;
*/
#include<iostream>
#include<time.h>

using namespace std;

int main()
{
	
	int rnum = 0; 	    //rnum holds the random number generated
	int trnum = 0; 	    //trnum is set to the total number of random numbers that need to be generated
	int i = 0;		    //i is a counter for the while loop that generates the random numbers
	int guess = 0; 	    //guess will hold the user's guess
	int low = 70; 	    //low is the lower limit for the random number generated
	int high = 770; 	//high is the upper limit for the random number generated
    char response;
	
	//seed the random number generator
	srand(time(0));
	/*
		!!!!!!!!!!!!!!!!!!!!!!
		generate a random number between the low & high range inclusively
	*/

    do {
        rnum = (rand()% (high - low + 1)) + low;

        cout << "\n\nGuess a number between " << low << " and " << high << ":  ";

        cin >> guess;
        
        /*
            !!!!!!!!!!!!!!!!!!!!!!!!!
            Complete the while loop so that it will validate if the user entered 
            a number in the valid range (7 to 77).  Both 7 & 77 are included in the valid range.
        */
        while(guess < low || guess > high)
        {
            cout << "The number is not in the valid range!\n";
            cout << "Guess a number between " << low << " and " << high << ":  ";
            cin >> guess;
        }
        
        if(guess == rnum)
            cout << "\n\nYou have gained the super power where skittles can shoot from your fingertips!\n\n";
        else
            cout << "\n\nYou get no super powers.  The random number was " << rnum << endl << endl;

        cout << "\n\nWould you like to run this program again? (Y or N): ";
        cin >> response;
    } while (response == 'Y');

	return 0;
}