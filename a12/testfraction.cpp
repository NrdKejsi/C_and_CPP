/*
CH-230-A
a12_p5.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    // rewriting old code using new operators
    Fraction x, y, sum, diff;
    //reading info for two new fractions
    cout << "Reading input for first fraction:\n";
    cin >> x;
    cout << "Reading input for second fraction:\n";
    cin >> y;

    //using the > operator to find greatest value
    cout << "Determining the greater function... Answer:\n";
    // depending on the return bool value, we print either x or y
    if(x > y) { 
        cout << "\t" << x << "\n";

    }
    else if(y > x) { 
        cout << "\t" << y << "\n";;
    }
    else { 
        cout << "Both fractions are equal.\n";
    } 

    //sum will be computed using overloaded operator +
    sum = x + y;
    //difference will be computed using overloaded operator -
    diff = x - y;

    //printing both results using overloaded << operator
    cout << "Sum is: " << sum;
    cout << "Difference is: " << diff;


    return 0;
}

