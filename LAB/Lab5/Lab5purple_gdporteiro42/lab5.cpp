/*
	Title: Lab5
	Author: Gabriel Porteiro
	Date: 09/28/2023
	Purpose: Receive and print a receipt for the Hogwards restaurant
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//variable declarations
	string lineOfStars(60, '*');
	int numA1=0, numA2=0, numA3=0;
	int numD1=0, numD2=0, numD3=0;
	int numM1=0, numM2=0, numM3=0, numM4=0;
	int numPeople;
	int mainChoice;
	int subChoice;
	double total=0;
	string name;

	//print header
	cout << endl << lineOfStars << endl;
	cout << setw(40) << "HOGWARTS RESTAURANT";
	cout << endl << lineOfStars << endl;
	
	//start user input
	cout << "How many people are included in your order?  ";
	cin >> numPeople;
	
	//validate input
	while(numPeople > 3 || numPeople <= 0) {
		cout << "Oops! Please, select 1, 2, or 3." << endl;
		cout << "\nHow many people are included in your order?  ";
		cin >> numPeople;
	}

	for(int i = 0; i < numPeople; i++) {
			cout << "What is your name: ";
			cin >> name;

			if(cin) {
				do {
					cout << "\nHi, " << name << ".  What would you like to order?\n";
					cout << "1. Appetizer\n";
					cout << "2. Drinks\n";
					cout << "3. Meal\n";
					cout << "4. I'm done!\n";
					cout << "Enter 1-4: ";
					cin >> mainChoice;

					while(mainChoice != 1 && mainChoice != 2 && mainChoice != 3 && mainChoice != 4){
						cout << "\nPlease, " << name << ".  Select a valid option on the menu:\n";
						cout << "1. Appetizer\n";
						cout << "2. Drinks\n";
						cout << "3. Meal\n";
						cout << "4. I'm done!\n";
						cout << "Enter 1-4: ";
						cin >> mainChoice;
					}
					
					if (mainChoice == 4) {
                    	break;
                	}

					// Use the user's menu selection to display the correct sub-menu
					switch(mainChoice) {
						case 1:
							cout << "\nGreat, you have selected Appetizer!\n";
							cout << "Choose from the following appetizers:\n";
							cout << "1. Dumbledonuts\t$2.99\n";
							cout << "2. Potterfries\t$5.99\n";
							cout << "3. Griffintoes\t$4.99\n";
							cout << "Choose 1-3: ";
							cin >> subChoice;

							switch (subChoice) {
								case 1:
									cout << "\nHow many Dumbledonuts do you want? ";
									cin >> numA1;
									total += ( numA1 * 2.99 );
									break;
								case 2:
									cout << "\nHow many Potterfries do you want? ";
									cin >> numA2;
									total += ( numA2 * 5.99 );
									break;	
								case 3:
									cout << "\nHow many Griffintoes do you want? ";
									cin >> numA3;
									total += ( numA3 * 4.99 );
									break;
								default:
									cout << "You didn't select a valid option";
									continue;

							}
							break;	
						case 2:
							cout << "\nGreat, you have selected Drinks!\n";
							cout << "Choose from the following drinks:\n";
							cout << "1. Polyjuice Potion   \t$5.99\n";
							cout << "2. Death Eater Negroni\t$6.99\n";
							cout << "3. Butter Beer        \t$4.99\n";
							cout << "Choose 1-3: ";
							cin >> subChoice;

							switch (subChoice) {
								case 1:
									cout << "How many Polyjuice Potion do you want? ";
									cin >> numD1;
									total += ( numD1 * 5.99 );
									break;
								case 2:
									cout << "How many Death Eater Negroni do you want? ";
									cin >> numD2;
									total += ( numD2 * 6.99 );
									break;	
								case 3:
									cout << "How many Butter Beer do you want? ";
									cin >> numD3;
									total += ( numD3 * 4.99 );
									break;
								default:
									cout << "You didn't select a valid option";
									continue;
							}

							break;
						case 3:
							cout << "\nGreat, you have selected Meal!\n";
							cout << "Choose from the following meals:\n";
							cout << "1. Griffinwings (10pcs)\t$10.99\n";
							cout << "2. Voldenose           \t$14.99\n";
							cout << "3. Hufflemuffin        \t$ 8.99\n";
							cout << "4. Ravenclaw Meat      \t$19.99\n";
							cout << "Choose 1-4: ";
							cin >> subChoice;

							switch (subChoice) {
								case 1:
									cout << "How many Griffinwings (10pcs) do you want? ";
									cin >> numM1;
									total += ( numM1 * 10.99 );
									break;
								case 2:
									cout << "How many Voldenose do you want? ";
									cin >> numM2;
									total += ( numM2 * 14.99 );
									break;	
								case 3:
									cout << "How many Hufflemuffin do you want? ";
									cin >> numM3;
									total += ( numM3 * 8.99 );
									break;
								case 4:
									cout << "How many Ravenclaw Meat do you want? ";
									cin >> numM4;
									total += ( numM4 * 19.99 );
									break;
								default:
									cout << "You didn't select a valid option";
									continue;
							}
							break;
						default: 
							cout << "Oops! Please select 1, 2, or 3.";
							cin >> mainChoice;
					}
				} while(mainChoice != 4);
			}
		}


	//print results (receipt)
	cout << endl << lineOfStars << endl;
	cout << setw(35) << "RECEIPT";
	cout << endl << lineOfStars << endl << endl;
	cout << setprecision(2) << fixed;
	
	cout << "LIST OF ITEMS OREDERED:\n";
	cout << "Appetizers\n";
	if(numA1 != 0)
		cout << "\t-Dumbledonuts X " << numA1 << endl;
	if(numA2 != 0)
		cout << "\t-Potterfries X " << numA2 << endl;
	if(numA3 != 0)
		cout << "\t-Griffintoes X " << numA3 << endl;
	cout << "Drinks\n";
	if(numD1 != 0)
		cout << "\t-Polyjuice Potion X " << numD1 << endl;
	if(numD2 != 0)
		cout << "\t-Death Eater Negroni X " << numD2 << endl;
	if(numD3 != 0)
		cout << "\t-Butter Beer X " << numD3 << endl;	
	cout << "Meals\n";
	if(numM1 != 0)
		cout << "\t-Griffinwings (10pcs) X " << numM1 << endl;
	if(numM2 != 0)
		cout << "\t-Voldenose X " << numM2 << endl;
	if(numM3 != 0)
		cout << "\t-Hufflemuffin X " << numM3 << endl;	
	if(numM4 != 0)
		cout << "\t-Ravenclaw Meat X " << numM4 << endl;
	
	cout << "\n\n*****TOTAL BILL: $" << total << endl << "THANK YOU!!\n\n";
	
	return 0;
}