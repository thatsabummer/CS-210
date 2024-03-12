// Author: Caleb Smith
// Date 03.11.2024
// CS-210 Lab 2-2

/****************************************************************************
 * *  This is a program that makes Mad Libs for the user.                 * *
 * *  We will take input from a user as an int and a string,              * *
 * *  store the input to variables to print it out with some pre-defined  * *
 * *  text to make the Mad Libs story. Enter quit then 0 to stop          * *
 ****************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Create a variable to hold the noun and number to add to the output
    string noun;
    int number;

    // Get a noun and a number from the user
    cin >> noun;
    cin >> number;

    // Create a loop that will iterate until the user quits
    while (noun != "quit"){
        if(noun == "quit"){
            break; // exit the loop if the user quits
        }

        // print the Mad Lib if the user doesn't quit
        else{
            cout << "Eating " << number <<" " << noun << " a day keeps you happy and healthy." << endl;

            // Take another input for both variables
            cin >> noun;
            cin >> number;

        }

    }

    return 0;
}
