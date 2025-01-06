/*
CH-230-A
a13_p6.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <iostream>
#include <vector> //including vector library

using namespace std;

int main() {
    //creating a vector object that stores 20 integers of value 8
    vector<int> vect (20, 8);
    //in try block, code that can potentially give errors is included
    try {
        vect.at(21); //using at()to try to access the 21st element
    }
    //in catch block, code that handles said exception is included
    catch(out_of_range &exc) {
        //printing error type (vector) by using what() method
        cerr << "The error is due to out of range: " << exc.what();
    }
    return 0;
}