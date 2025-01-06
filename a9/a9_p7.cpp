/*
 CH-230-A
 a9_p7.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <iostream>

using namespace std;

//function to swap integers-calling them by reference (&)
void swapping(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

//function to swap floats-calling them by reference (&)
void swapping(float &x, float &y){
    float temp = x;
    x = y;
    y = temp;
}

/*function to swap characters using their pointers, because
they are constant variables. Calling by reference.*/
void swapping(const char* &x, const char* &y){ 
    const char *temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    cout << "a =" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    //calling the functions
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    cout << "a=" << a << ", b=" << b << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    return 0;
}