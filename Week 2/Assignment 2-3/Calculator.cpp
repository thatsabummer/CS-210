/**********************************************
 * Calculator.cpp                             *
 * A debugged and working CLI calculator app  *
 * with the four basic operators (+,-,*,/)    *
 *                                            *
 *  Date: 03.12.2024                          *
 *  Author: Caleb Smith                       *
 **********************************************/

#include <iostream>
using namespace std;

int main()
{
    int intOne;    // the first int
    int intTwo;    // the second int
    char operation; // the operator
    char answer;    // the result of the operation

    // Start the user in the loop
    while (answer = 'Y')
    {
        // Prompt the user for an input
        cout << "Enter an expression" << endl;

        // Take input for int 1, the operator, and int 2
        cin >> intOne >> operation >> intTwo;

        // Print the expression and the result of adding
        if (operation == '+'){
            cout << intOne << " + " << intTwo << " = " << intOne + intTwo << endl;
        }

        // Print the expression and the result of subtracting
        if (operation == '-'){
            cout << intOne << " - " << intTwo << " = " << intOne - intTwo << endl;
        }

        // Print the expression and the result of multiplying
        if (operation == '*') {
            cout << intOne << " * " << intTwo << " = " << intOne * intTwo << endl;
        }

        // Print the result of dividing
        if (operation == '/') {
            cout << intOne << " / " << intTwo << " = " << intOne / intTwo << endl;
        }

        // Ask the user if they want to do it again
        cout << "Do you wish to evaluate another expression? " << endl;

        // Take user input for the question
        cin >> answer;

        // Exit the loop unless the user inputs 'Y'
        if (answer != 'Y'){
            break;
        }
    }
    return 0;
}
