/*
CH-230-A
a13_p2.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include "Complex.h"
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // opening the first input file for reading
    ifstream firstInput("in1.txt", ios::in);

    //declaring necessary place-holder variables
    float real1;
    float imag1;
    Complex Cx1;

    //simultaneously checking to see if file opened or not
    if(firstInput) {
        //reading real & imaginary parts from our input file stream
        firstInput >> real1 >> imag1;
        Cx1.setImag(imag1);
        Cx1.setReal(real1);

    } else {
        // printing error message accordingly if opening fails
        cout << "Error with opening first file!\n";
        exit(1);
    }

    firstInput.close(); //closing the first input file

    //opening second input file for reading
    ifstream secondInput("in2.txt", ios::in);
    
    float real2;
    float imag2;
    Complex Cx2;

    if(secondInput) {
    //reading real & imaginary parts from our 2nd input file stream
        secondInput >> real2 >> imag2;
        Cx2.setImag(imag2);
        Cx2.setReal(real2);

    } else {
        // printing error message accordingly if opening fails
        cout << "Error with opening second file!\n";
        exit(1);
    }

    secondInput.close(); //closing second input file

    //doing computations using overloaded operators
    Complex sum = Cx1 + Cx2;
    Complex diff = Cx1 - Cx2;
    Complex prod = Cx1 * Cx2;

    //firstly printing them into the screen
    cout << "The sum is: "<< sum << endl;
    cout << "The difference is: " << diff << endl;
    cout << "The product is: " << prod << endl;

    //opening our output file for writing
    ofstream output("output.txt", ios::out);
    //writing into it if opening it worked
    if(output) {
        output << "The sum is: "<<  sum << endl;
        output << "The difference is: " << diff << endl;
        output << "The product is: " << prod << endl;
    } else {
        // printing error message accordingly if opening fails
        cout << "Error with opening output file!\n";
        exit(1);
    }

    output.close(); //closing output file

    return 0;
}