/*
 CH-230-A
 a9_p3.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <iostream>
//for easier writing
using namespace std;

//declaring a function to return absolute value
float toAbs(float x){
    //for a negative value return -x
    if(x < 0){
        x = 0 - x;
    }
    //for a non-negative x return same value
    else if(x >= 0){
        x = x;
    }
    return x;
}

int main(){
    //reading float
    float x;
    cin >> x;

    //printing result of function
    cout << toAbs(x) << endl;

    return 0;
}