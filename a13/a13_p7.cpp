/*
CH-230-A
a13_p7.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <iostream>
#include <exception> //defines exception class
using namespace std;

//creating my own exception class deerived from exception
class OwnException : public exception {
    public:
    //exception constructor with unique message printed
        OwnException(string msg) {
            cout << msg << "\n";
        }; 

    //overwriting what method (not expected to throw any exceptions)
        const char* what() const throw(){
            return "OwnException\n"; 
        }
};

exception throwExc(int n) {
    //using switch statement to handle all cases
    switch(n) {
        //if n == 1 -> throw char a
        case 1:
            throw('a');
            break;
        case 2:
         //if n == 2 -> throw int 12
            throw(12);
            break;
        case 3:
         //if n == 3 -> throw bool value true
            throw(true);
            break;
        default: 
        //if n == anything else -> throw our exception with message
            throw OwnException("Default case exception");
            break;
    }
}

int main() {
    //trying and catching each exception thrown for each case
    try {
        throwExc(1);
    } catch(char c) {
        cerr << "Caught in main: " << c << "\n";
    }

    try {
        throwExc(2);
    } catch(int n) {
        cerr << "Caught in main: " << n << "\n";
    } 

    try {
        throwExc(3);
    } catch(bool b) {
        //using boolalpha to print 'true' instead of 1
        cerr << boolalpha << "Caught in main: " << b << "\n";
    }

    try {
        throwExc(7);
    } catch(OwnException& any) {
        //printing error message in OwnException class
        cout << "Caught in main: " << any.what();
     }

    return 0;
}