// Author: Caleb Smith
// CS-210
// Week 3 Lab
// 03.29.2024 [LATE]

#include <iostream>
#include <vector>
using namespace std;

// a function to switch the values of two ints (called in sortVector)
void swap(int *g, int *h){
    int temp = *g;  // set temp equal to g
    *g = *h;        // set g = h
    *h = temp;      // set h = temp
}

// a function that sorts a vector of integers from highest to lowest (called in main)
void sortVector(vector<int> &myVec){

    // look at each element in the vector and compare it to the element next to it
    for (int i = 0; i < myVec.size()-1; ++i) {

        // if the next element is greater, call the swap function to switch the elements
        for (int j = 0; j < myVec.size() -i-1; ++j) {
            if (myVec[j] < myVec[j+1]){
                swap(&myVec[j], &myVec[j+1]);
            }
        }
    }
}

int main() {

    // take input for the total number of ints the user will enter
    int k;
    cin >> k;

    // add the ints to a vector one by one using push_back
    vector<int> myVec;
    for (int i = 0; i < k; i++) {
        int temp;
        cin >> temp;
        myVec.push_back(temp);
    }

    // call the sortVector function to sort the ints
    sortVector(myVec);

    // print a comma after each element
    for(int i = 0; i < k; i++) {
        cout << myVec[i] << ",";

    }
    cout << endl;

    return 0;
}
