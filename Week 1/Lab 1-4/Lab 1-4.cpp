// Author: Caleb Smith
// Date: 03.06.2024
// CS-210
// LAB 1-3

#include <iostream>              // For input/output
#include <iomanip>               // For set precision
using namespace std;             // For printing

int main() {

    float milesPerGallon; // Float for fuel economy
    float costPerGallon;  // Float for fuel cost

    cin >> milesPerGallon >> costPerGallon; // Take input for fuel economy and fuel cost


    // Calculate the cost to travel 20, 75, and 500 miles

    float twentyMiles = (20 / milesPerGallon) * costPerGallon;
    float seventyFiveMiles = (75 / milesPerGallon) * costPerGallon;
    float fiveHundredMiles = (500 / milesPerGallon) * costPerGallon;

    cout << fixed << setprecision(2);  // Set percision to display values ar $X.xx

    // Print the cost results for 20, 75, and 500 miles and then a new line
    std::cout << twentyMiles << + " " << seventyFiveMiles << + " " << fiveHundredMiles << std::endl;

    return 0;
}
