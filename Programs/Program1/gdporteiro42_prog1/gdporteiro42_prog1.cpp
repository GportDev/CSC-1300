/*
	Title:  	Program 1
	Date:		9/20/2023
	Author:		Gabriel Porteiro
	Purpose:	Personality test based on donuts
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    int strawberryJelly = 0;
    int poweredSugar = 0;
    int bostonCream = 0;
    int chocolateFrosted = 0;
    int oldFashioned = 0;
    int doubleChocolate = 0;
    char userAnswer;
    int maxValueStbPws;
    string userPersonality;
    char runTest;


    while(runTest != 'n' && runTest != 'N') {
        // Print the title of the program
        cout << "\n\n--------------------------------------------------" << endl;
        cout << "            WHAT TYPE OF DONUT ARE YOU?           " << endl;
        cout << "--------------------------------------------------" << endl;
        cout << "Answer the following ten questions to find out what donut you are" << endl;

        // Question 1
        cout << "\n\nWhat is a question people ask you often?" << endl;
        cout << "       a. What is my advice for various subjects" << endl;
        cout << "       b. What are my favorites books and movies" << endl;
        cout << "       c. How was my last travel experiences" << endl;
        cout << "       d. How I stay so calm under pressure" << endl;
        cout << "       e. How is going my fitness routine" << endl;
        cout << "       f. How I got My cooking skills" << endl;

        cout << "\nType a, b, c, d, e, or f and then press ENTER: ";
        cin >> userAnswer;

        // This while will make sure that the user is computing the write values.
        while(userAnswer != 'a' && userAnswer != 'b' && userAnswer != 'c' && userAnswer != 'd' && userAnswer != 'e' && userAnswer != 'f') {
            cout << "Please, type a, b, c, d, e, or f and then press ENTER: ";
            cin >> userAnswer;
        }

        // This switch will evaluate the input and increase the personality that correspond.
        switch (userAnswer) {
            case 'a':
                strawberryJelly++;
                break;
            case 'b':
                poweredSugar++;
                break;
            case 'c':
                bostonCream++;
                break;
            case 'd':
                chocolateFrosted++;
                break;
            case 'e':
                oldFashioned++;
            case 'f':
                doubleChocolate++;
                break;
            default:
                cout << "Please, type a, b, c, d, e, or f and then press ENTER: " << endl;
        }

        // Question 2
        cout << "\n\nWhat are you most proud of?" << endl;
        cout << "       a. My Academic achievements." << endl;
        cout << "       b. My volunteer work." << endl;
        cout << "       c. My artistic creations." << endl;
        cout << "       d. My ability to overcome obstacles." << endl;
        cout << "       e. My career accomplishments." << endl;
        cout << "       f. My determination chasing my dreams." << endl;

        cout << "\nType a, b, c, d, e, or f and then press ENTER: ";
        cin >> userAnswer;

        while(userAnswer != 'a' && userAnswer != 'b' && userAnswer != 'c' && userAnswer != 'd' && userAnswer != 'e' && userAnswer != 'f') {
            cout << "Please, type a, b, c, d, e, or f and then press ENTER: ";
            cin >> userAnswer;
        }

        switch (userAnswer) {
            case 'a':
                strawberryJelly++;
                break;
            case 'b':
                poweredSugar++;
                break;
            case 'c':
                bostonCream++;
                break;
            case 'd':
                chocolateFrosted++;
                break;
            case 'e':
                oldFashioned++;
            case 'f':
                doubleChocolate++;
                break;
            default:
                cout << "Please, type a, b, c, d, e, or f and then press ENTER: " << endl;
        }

        // Question 3
        cout << "\n\nWhat do you do with your free time when you don't have plans?" << endl;
        cout << "       a. Read and discover new books." << endl;
        cout << "       b. Going for long walks outdoors." << endl;
        cout << "       c. Experiments in cooking or baking." << endl;
        cout << "       d. Practicing a musical instrument." << endl;
        cout << "       e. Projects of \'Do it yourself\'." << endl;
        cout << "       f. Relax with yoga and meditation." << endl;

        cout << "\nType a, b, c, d, e, or f and then press ENTER: ";
        cin >> userAnswer;

        while(userAnswer != 'a' && userAnswer != 'b' && userAnswer != 'c' && userAnswer != 'd' && userAnswer != 'e' && userAnswer != 'f') {
            cout << "Please, type a, b, c, d, e, or f and then press ENTER: ";
            cin >> userAnswer;
        }

        switch (userAnswer) {
            case 'a':
                strawberryJelly++;
                break;
            case 'b':
                poweredSugar++;
                break;
            case 'c':
                bostonCream++;
                break;
            case 'd':
                chocolateFrosted++;
                break;
            case 'e':
                oldFashioned++;
            case 'f':
                doubleChocolate++;
                break;
            default:
                cout << "Please, type a, b, c, d, e, or f and then press ENTER: " << endl;
        }

        // Question 4
        cout << "\n\nIf you could change one thing about your personality, what would it be?" << endl;
        cout << "       a. Be more outgoing and sociable." << endl;
        cout << "       b. Be more patient and less impulsive." << endl;
        cout << "       c. Be less of perfectionist." << endl;
        cout << "       d. Be more assertive and speak my mind." << endl;
        cout << "       e. Worry less and be more carefree." << endl;
        cout << "       f. Be more organized." << endl;

        cout << "\nType a, b, c, d, e, or f and then press ENTER: ";
        cin >> userAnswer;

        while(userAnswer != 'a' && userAnswer != 'b' && userAnswer != 'c' && userAnswer != 'd' && userAnswer != 'e' && userAnswer != 'f') {
            cout << "Please, type a, b, c, d, e, or f and then press ENTER: ";
            cin >> userAnswer;
        }

        switch (userAnswer) {
            case 'a':
                strawberryJelly++;
                break;
            case 'b':
                poweredSugar++;
                break;
            case 'c':
                bostonCream++;
                break;
            case 'd':
                chocolateFrosted++;
                break;
            case 'e':
                oldFashioned++;
            case 'f':
                doubleChocolate++;
                break;
            default:
                cout << "Please, type a, b, c, d, e, or f and then press ENTER: " << endl;
        }

        // Question 5
        cout << "\n\nHow do you offer sympathy to your friends when they're experiencing life challenges?" << endl;
        cout << "       a. Actively listening and providing emotional support." << endl;
        cout << "       b. Offering practical solutions to solve the problem." << endl;
        cout << "       c. Sending heartfelt messages and checking in regularly." << endl;
        cout << "       d. Cooking or bringing comfort food to them." << endl;
        cout << "       e. Organizing a fun thing to distract them." << endl;
        cout << "       f. Offering help with tasks." << endl;

        cout << "\nType a, b, c, d, e, or f and then press ENTER: ";
        cin >> userAnswer;

        while(userAnswer != 'a' && userAnswer != 'b' && userAnswer != 'c' && userAnswer != 'd' && userAnswer != 'e' && userAnswer != 'f') {
            cout << "Please, type a, b, c, d, e, or f and then press ENTER: ";
            cin >> userAnswer;
        }

        switch (userAnswer) {
            case 'a':
                strawberryJelly++;
                break;
            case 'b':
                poweredSugar++;
                break;
            case 'c':
                bostonCream++;
                break;
            case 'd':
                chocolateFrosted++;
                break;
            case 'e':
                oldFashioned++;
            case 'f':
                doubleChocolate++;
                break;
            default:
                cout << "Please, type a, b, c, d, e, or f and then press ENTER: " << endl;
        }

        // Question 6
        cout << "\n\nWhat do you do to manage stress?" << endl;
        cout << "       a. Deep breathing and meditation." << endl;
        cout << "       b. Hit the gym or go for a run." << endl;
        cout << "       c. Journal and write down my thoughts." << endl;
        cout << "       d. Enjoy in a favorite hobby." << endl;
        cout << "       e. Seek solace going to hike or camping." << endl;
        cout << "       f. Spend the day in a spa or self-care routine." << endl;

        cout << "\nType a, b, c, d, e, or f and then press ENTER: ";
        cin >> userAnswer;

        while(userAnswer != 'a' && userAnswer != 'b' && userAnswer != 'c' && userAnswer != 'd' && userAnswer != 'e' && userAnswer != 'f') {
            cout << "Please, type a, b, c, d, e, or f and then press ENTER: ";
            cin >> userAnswer;
        }

        switch (userAnswer) {
            case 'a':
                strawberryJelly++;
                break;
            case 'b':
                poweredSugar++;
                break;
            case 'c':
                bostonCream++;
                break;
            case 'd':
                chocolateFrosted++;
                break;
            case 'e':
                oldFashioned++;
            case 'f':
                doubleChocolate++;
                break;
            default:
                cout << "Please, type a, b, c, d, e, or f and then press ENTER: " << endl;
        }

        // Question 7
        cout << "\n\nWhat was your favorite activity as a child?" << endl;
        cout << "       a. Play sports and being active." << endl;
        cout << "       b. Build stuff with LEGOs." << endl;
        cout << "       c. Read a book with my mom." << endl;
        cout << "       d. Playing pretend and dressing up." << endl;
        cout << "       e. Exploring nature and outdoors with dad." << endl;
        cout << "       f. Petting cute animals." << endl;

        cout << "\nType a, b, c, d, e, or f and then press ENTER: ";
        cin >> userAnswer;

        while(userAnswer != 'a' && userAnswer != 'b' && userAnswer != 'c' && userAnswer != 'd' && userAnswer != 'e' && userAnswer != 'f') {
            cout << "Please, type a, b, c, d, e, or f and then press ENTER: ";
            cin >> userAnswer;
        }

        switch (userAnswer) {
            case 'a':
                strawberryJelly++;
                break;
            case 'b':
                poweredSugar++;
                break;
            case 'c':
                bostonCream++;
                break;
            case 'd':
                chocolateFrosted++;
                break;
            case 'e':
                oldFashioned++;
            case 'f':
                doubleChocolate++;
                break;
            default:
                cout << "Please, type a, b, c, d, e, or f and then press ENTER: " << endl;
        }

        // Question 8
        cout << "\n\nWhat is one type of comment you'd never make to another person?" << endl;
        cout << "       a. Hurtful comments." << endl;
        cout << "       b. Making judgments about their appearances." << endl;
        cout << "       c. Sharing someone's personal secrets." << endl;
        cout << "       d. Sarcastic or snarky remarks." << endl;
        cout << "       e. Undermining someone self-esteem." << endl;
        cout << "       f. Bring up sensitive topics." << endl;

        cout << "\nType a, b, c, d, e, or f and then press ENTER: ";
        cin >> userAnswer;

        while(userAnswer != 'a' && userAnswer != 'b' && userAnswer != 'c' && userAnswer != 'd' && userAnswer != 'e' && userAnswer != 'f') {
            cout << "Please, type a, b, c, d, e, or f and then press ENTER: ";
            cin >> userAnswer;
        }

        switch (userAnswer) {
            case 'a':
                strawberryJelly++;
                break;
            case 'b':
                poweredSugar++;
                break;
            case 'c':
                bostonCream++;
                break;
            case 'd':
                chocolateFrosted++;
                break;
            case 'e':
                oldFashioned++;
            case 'f':
                doubleChocolate++;
                break;
            default:
                cout << "Please, type a, b, c, d, e, or f and then press ENTER: " << endl;
        }

        // Question 9
        cout << "\n\nHow do you make important decisions?" << endl;
        cout << "       a. Weigh pros and cons carefully before deciding." << endl;
        cout << "       b. Consulting friends and family." << endl;
        cout << "       c. Follow my intuition." << endl;
        cout << "       d. Research and gather information." << endl;
        cout << "       e. Seek advice from experts." << endl;
        cout << "       f. Based on long-term goals." << endl;

        cout << "\nType a, b, c, d, e, or f and then press ENTER: ";
        cin >> userAnswer;

        while(userAnswer != 'a' && userAnswer != 'b' && userAnswer != 'c' && userAnswer != 'd' && userAnswer != 'e' && userAnswer != 'f') {
            cout << "Please, type a, b, c, d, e, or f and then press ENTER: ";
            cin >> userAnswer;
        }

        switch (userAnswer) {
            case 'a':
                strawberryJelly++;
                break;
            case 'b':
                poweredSugar++;
                break;
            case 'c':
                bostonCream++;
                break;
            case 'd':
                chocolateFrosted++;
                break;
            case 'e':
                oldFashioned++;
            case 'f':
                doubleChocolate++;
                break;
            default:
                cout << "Please, type a, b, c, d, e, or f and then press ENTER: " << endl;
        }

        // Question 10
        cout << "\n\nWhat type of routine do you follow daily?" << endl;
        cout << "       a. Strict daily workouts routine." << endl;
        cout << "       b. Morning routine for productivity and focus." << endl;
        cout << "       c. Consistent skincare and self-care routine." << endl;
        cout << "       d. Daily meditations and mindfulness." << endl;
        cout << "       e. Work-centered." << endl;
        cout << "       f. Daily journaling." << endl;

        cout << "\nType a, b, c, d, e, or f and then press ENTER: ";
        cin >> userAnswer;

        while(userAnswer != 'a' && userAnswer != 'b' && userAnswer != 'c' && userAnswer != 'd' && userAnswer != 'e' && userAnswer != 'f') {
            cout << "Please, type a, b, c, d, e, or f and then press ENTER: ";
            cin >> userAnswer;
        }

        switch (userAnswer) {
            case 'a':
                strawberryJelly++;
                break;
            case 'b':
                poweredSugar++;
                break;
            case 'c':
                bostonCream++;
                break;
            case 'd':
                chocolateFrosted++;
                break;
            case 'e':
                oldFashioned++;
            case 'f':
                doubleChocolate++;
                break;
            default:
                cout << "Please, type a, b, c, d, e, or f and then press ENTER: " << endl;
        }

        cout << "\n\n--------------------------------------------------" << endl;
        cout << "--------------------------------------------------" << endl;
        cout << "                       RESULTS                    " << endl;
        cout << "--------------------------------------------------\n\n" << endl;

        cout << "Strawberry Jelly: " << strawberryJelly << endl;
        cout << "Powered sugar: " << poweredSugar << endl;
        cout << "Boston cream: " << bostonCream << endl;
        cout << "Chocolate Frosted: " << chocolateFrosted << endl;
        cout << "Old Fashioned: " << oldFashioned << endl;
        cout << "Double chocolate: " << doubleChocolate << endl;

        //The best approach, in my opinion, is to compare the values inside an Array. But since we didn't had arrays classes, I think I should do if a more verbose way using ifs to compare the values.
        if(strawberryJelly > poweredSugar && strawberryJelly > bostonCream && strawberryJelly > chocolateFrosted && strawberryJelly > oldFashioned && strawberryJelly > doubleChocolate) {
            cout << "\n--------------------------------------------------" << endl;
            cout << "--------------------------------------------------" << endl;
            cout << "You are a STRAWBERRY JELLY!" << endl;
            cout << "--------------------------------------------------" << endl;
        } else if(poweredSugar > strawberryJelly && poweredSugar > bostonCream && poweredSugar > chocolateFrosted && poweredSugar > oldFashioned && poweredSugar > doubleChocolate) {
            cout << "\n--------------------------------------------------" << endl;
            cout << "--------------------------------------------------" << endl;
            cout << "You are a POWERED SUGAR!" << endl;
            cout << "--------------------------------------------------" << endl;
        } else if(bostonCream > poweredSugar && bostonCream > strawberryJelly && bostonCream > chocolateFrosted && bostonCream > oldFashioned && bostonCream > doubleChocolate) {
            cout << "\n--------------------------------------------------" << endl;
            cout << "--------------------------------------------------" << endl;
            cout << "You are a BOSTON CREAM!" << endl;
            cout << "--------------------------------------------------" << endl;
        } else if(chocolateFrosted > poweredSugar && chocolateFrosted > bostonCream && chocolateFrosted > strawberryJelly && chocolateFrosted > oldFashioned && chocolateFrosted > doubleChocolate) {
            cout << "\n--------------------------------------------------" << endl;
            cout << "--------------------------------------------------" << endl;
            cout << "You are a CHOCOLATE FROSTED!" << endl;
            cout << "--------------------------------------------------" << endl;
        } else if(oldFashioned > poweredSugar && oldFashioned > bostonCream && oldFashioned > chocolateFrosted && oldFashioned > strawberryJelly && oldFashioned > doubleChocolate) {
            cout << "\n--------------------------------------------------" << endl;
            cout << "--------------------------------------------------" << endl;
            cout << "You are a OLD FASHIONED!" << endl;
            cout << "--------------------------------------------------" << endl;
        } else if(doubleChocolate > poweredSugar && doubleChocolate > bostonCream && doubleChocolate > chocolateFrosted && doubleChocolate > oldFashioned && doubleChocolate > strawberryJelly) {
            cout << "\n--------------------------------------------------" << endl;
            cout << "--------------------------------------------------" << endl;
            cout << "You are a DOUBLE CHOCOLATE!" << endl;
            cout << "--------------------------------------------------" << endl;
        } else {
            cout << "\nSorry, I do not know what you are. I think you are confused." << endl;
        }

        cout << "Do you want to run the test again? (y/n)" << endl;
        cin >> runTest;
    }

    return 0;
}