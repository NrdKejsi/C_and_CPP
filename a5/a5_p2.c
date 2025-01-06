/*
 CH-230-A
 a5_p2.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

void divby5(float arr[], int size){
    int i;
    //Each array element is replaced by itself divided by 5
    for(i=0; i<size; i++){
        arr[i] = arr[i] / 5;
    }
}

int main(){
    int i, j;
    //The array has constant data
    float array[]={5.5, 6.5, 7.75, 8.0, 9.6, 10.36};

    printf("Before:\n");
    //Printing each element with a precision point of 3 decimals
    for(i=0; i<6; i++){
        printf("%.3f ", array[i]);
    }
    printf("\nAfter:\n");
    //Using the function we defined above
    divby5(array, 6);
    //Printing each new element with a precision point of 3 decimals
    for(j=0; j<6; j++){
        printf("%.3f ", array[j]);
    }
    printf("\n");

    return 0;
}