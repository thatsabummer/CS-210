// Author: Caleb Smith
// CS-210
// Project 1
// 03.24.2024

/**********************************************************************
 *                                                                    *
 *  A program to show a 12-hour and 24-hour clock and allow the user  *
 *  to update the time                                                *
 *                                                                    *
 *  One known bug: 12PM shows 12AM I tried for hours to figure        *
 *  this out, but I have to move on.                                  *
 *                                                                    *
 **********************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// global variables
int hour;       // store hours value
int minute;     // store minutes value
int second;     // store seconds value
int hourTwelve; // store hours value in 12h format
string amPM;    // store AM or PM as a string

int getTime() {

    // get the time off of the system clock
    time_t now = time(0);
    tm *ltm = localtime(&now);

    // initialize variables for this function
    hour = ltm->tm_hour;    // get the hour
    minute = ltm->tm_min;   // get the minute
    second = ltm->tm_sec;   // get the second

    // convert 24 to 12 hour
    // make sure that the 12-hour clock can never
    // have a negative hour after conversion
    // set amPM and hourTwelve here if it's after 11:59:59
    if (hour >= 12) {
        hourTwelve = hour;
        amPM = "PM";
    }

    // set hourTwelve to the 24h value - 12 if it's after 12:59:59
    // set hourTwelve to hour if it is less than 12: in the 24h format
    // set hourTwelve to 12 if it is 00: in the hour in 24h format
    if (hour >= 13) {
        hourTwelve = hour - 12;
    } else {
        hourTwelve = hour;
        }
        if (hour == 0) {
            hourTwelve = 12;
        }
    return 0;
    }

int printClock() {

    // Print the clock line by line filling in the variables
    // use setfill to add leading zeros
    // use setw to tell set how many values can be zero
    cout << "***************************   ***************************" << endl;
    cout << "*      12-Hour Clock      *   *      24-Hour Clock      *" << endl;
    cout << "*       ";
    cout << setfill('0') << setw(2) << hourTwelve << ":";
    cout << setfill('0') << setw(2) << minute << ":";
    cout << setfill('0') << setw(2) << second;
    cout << " " << amPM;
    cout << "       *   *        ";
    cout << setfill('0') << setw(2) << hour << ":";
    cout << setfill('0') << setw(2) << minute << ":";
    cout << setfill('0') << setw(2) << second;
    cout << "         *" << endl;
    cout << "***************************   ***************************" << endl;
    cout << endl;
    cout << "                *************************" << endl;
    cout << "                * 1 - Add One Hour      *" << endl;
    cout << "                * 2 - Add One Minute    *" << endl;
    cout << "                * 3 - Add One Second    *" << endl;
    cout << "                * 4 - Exit Program      *" << endl;
    cout << "                *************************" << endl;
    cout << endl;

    return 0;
    }


int addTime(){
    // Create a variable to store input and take user input
    int userInput = 0;

    // input loop to add time that exits if userInput is 4
    while(userInput != 4){
        cin >> userInput;   // take user input

        // if the user wants to add an hour
        if (userInput == 1){
            // add an hour up to 23: to avoid going over
            if (hour < 23){
                hour = hour + 1;    // add an hour
            }
            // set hour to zero for midnight
            else{
                hour = 0;
            }
            if( hour >= 12)
                amPM = "PM";
            // convert to 12h format
            if (hour >= 13) {
                hourTwelve = hour - 12;

            } else {    // if under 13, hourTwelve and hour are the same
                hourTwelve = hour;
                if (hour == 0) {    // set midnight show 12 in 12h format
                    hourTwelve = 12;
                }
                amPM = "AM";
            }
        }

        // if the user wants to add a minute
        else if (userInput == 2){
            // add a minute up to :59 to avoid going over
            if (minute < 59){
                minute = minute + 1;    // add a minute
            }
            else{
                minute = 0;
            }
        }

        // if the user wants to add a second
        else if (userInput == 3){
            // add a second up to :59 to avoid going over
            if (second < 59) {
                second = second + 1;    // add a second
            }
            else{
                second = 0; // set seconds to zero after :59
            }
        }

        // if the user wants to exit the program
        else if (userInput == 4){
            break;  // exit the loop ending the program
        }

        // if the user inputs an invalid choice
        else{
            cout << "Invalid Entry." << endl;
            cout << endl;
        }

        // call printClock to show the updated clock
        printClock();
    }
    return 0;
}


// Program driver
int main() {

    getTime();      // call getTime to get the time from the system clock
    printClock();   // call printClock to display the clock
    addTime();      // call to take input to

    return 0;
}
