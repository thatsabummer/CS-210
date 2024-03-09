//TODO: LOGIC FOR SPLITTING
//DONE: input and output, formatting, some commenting
// DUE: 03.17.2024


// Author: Caleb Smith
// Date 03.11.2024
// CS-210 Lab 2-2

/****************************************************************************
 * *  This is a program that makes Mad Libs for the user.                 * *
 * *  We will take input from a user split it into an int and a string,   * *
 * *  store the input to variables to print it out with some pre-defined  * *
 * *  text to make the Mad Libs story.                                    * *
 ****************************************************************************/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {

    // variables to hold the original input
    string inputOne;
    string inputTwo;
    string inputThree;

    // variables to hold the split input string
    string stringOne;
    string stringTwo;
    string stringThree;

    // variables to hold the split input int
    int intOne;
    int intTwo;
    int intThree;

    // take single line input to be split (three times)

    std::cin >> inputOne;

        // use stringstream to split the input

        std::string tempOne = inputOne;
        std::istringstream is (tempOne);    // TODO: Understand this

            int k;
            while(is >> k) {
                    // logic to iterate over the string to split it
            }

    std::cin >> inputTwo;

        //use stringstream to split the input

        std::string tempTwo = inputTwo;
        std::istringstream is (tempTwo); // TODO: Figure out "is"

            int l;
            while(is >> l) {
                // logic to iterate over the string to split it
            }

    std::cin >> inputThree;

        //use stringstream to split the input

        std::string tempThree = inputTwo;
        std::istringstream is (tempThree); // TODO: Figure out "is"

            int m;
            while(is >> m) {
                // logic to iterate over the string to split it
            }
    // print the Mad Lib

        std::cout << "Eating " << intOne << " " << stringOne << " a day keeps you happy and healthy." << endl;
        std::cout << "Eating " << intTwo << " " << stringTwo << " a day keeps you happy and healthy." << endl;
        std::cout << "Eating " << intThree << " " << stringThree << " a day keeps you happy and healthy." << endl;


            return 0;
}
