/*
 CH-230-A
 a9_p6.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <iostream>

using namespace std;

//function to return first +ive & even element
int myfirst(int array[], int size){
    for(int i = 0; i < size; i++){
        if(array[i] > 0 && (array[i] % 2) == 0){
            return array[i];
        }
    }
    //otherwise we return the value -1
    return -1;
}

//function to return first -ive and whole element
double myfirst(double array[], int size){
    for(int i = 0; i < size; i++){
        if(array[i] < 0 && ((int) array[i] == array[i])){
            return array[i];
        }
    }
    //otherwise return the value -1.1
    return -1.1;
}

//function to return the first consonant of array
char myfirst(char array[], int size){
    for(int i = 0; i <size; i++){
        if(array[i] != 'a' && array[i] != 'e' && array[i] != 'i'
           && array[i] != 'o' && array[i] != 'u' && array[i] != 'y'
           && array[i] != 'A' && array[i] != 'E' && array[i] != 'I'
           && array[i] != 'O' && array[i] != 'U' && array[i] != 'Y'){
            return array[i];
           }
    }
    //otherwise return 0
    return '0';
}

int main(){
    //declaring and initializing all arrays
    int intArray[5] = {5, 7, 8, 9, 10};
    double doubArray[5] = {3.45, 7.893, 0.0, -9.84, -5};
    char charArray[5] = {'a', 'Y', 'i', 'e', 'b'};

    //printing the return value of function that takes integers
    cout << "Result of function for integer array:" << endl;
    cout << myfirst(intArray, 5) << endl;
    //printing the return value of function that takes doubles
    cout << "Result of function for double array:" << endl;
    cout << myfirst(doubArray, 5) << endl;
    //printing result value of function that takes characters
    cout << "Result of function for char array:" << endl;
    cout << myfirst(charArray, 5) << endl;

    return 0;
}